cmake -H. -Bbuild -DCMAKE_BUILD_TYPE=Debug

echo "## cd ./build"
cd ./build

echo "## make all"
make all

echo "## cd .."
cd ..
