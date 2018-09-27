#include "PDB.h"

using namespace std;


vector<string> pdblist;

void read_params(int argc, char const *argv[]){
    if (argc < 2){
        std::cout << "       Get map output for PDB" << endl;
        std::cout << "Usage: " << argv[0] <<" pdb1[ pdb2 pdb3 ...]" << endl;
        exit(0);
    }

    pdblist.clear();
    for (int i0 = 1; i0 < argc ; i0++){
        pdblist.push_back(argv[i0]);
    }
}

void run_getmap(int argc, char const *argv[]){

    read_params(argc, argv);
    for (string apdb : pdblist){
        structure astr(apdb);
        astr.rna_init_pairs();
        string mystr = astr.get_mapstr();
        cout << mystr << endl;
    }
}

int main(int argc, char const *argv[])
{
    run_getmap(argc,argv);
    /* code */
    return 0;
}
