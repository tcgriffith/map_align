read_contactmap <- function(filepath) {
  a <- readLines(con = filepath)
  a.cln <- grep("^CON", a, value = TRUE)
  a.df <- data.table::fread(paste(a.cln, collapse = "\n"))
  return(a.df)
}

plot_contactmap <- function(df){
  gg <- ggplot2::ggplot(df) +
    ggplot2::geom_tile(aes(x=V2,y=V3,fill=V4))
  return(gg)
}