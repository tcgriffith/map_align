#ifndef _PDB_UTILS
#define _PDB_UTILS
#include <unordered_map>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>


// using namespace std;

// Necessary parameters for RNA structures

namespace pdb_utils{

    extern double hbond_cutoff; // hydrogen bond cutoff


// ==============================================
// smcra/RNA
// Deal with old/new PDB conventions
// ==============================================

   extern std::unordered_map<std::string,std::string> old_2_new;

// ==============================================
// neighbor atom maps in RNA
// ==============================================

   extern std::unordered_map<std::string, std::vector<std::string>> rna_atom_neighbors;


// ==============================================
// Protein Triple code to single char code
// ==============================================


   extern std::unordered_map<std::string, std::string> prot_tri2sin;

//  ==============================================
//  RNA atom type encoding
//  RNA {atom name,int} <-> {int,atom name}
//             atomtype <-> typeatom
//  ==============================================
   extern std::unordered_map<std::string,int> atomtype;

   extern std::unordered_map<int, std::string> typeatom;

//  ==============================================
//  functions
//  ==============================================

    bool is_rna_polar_atom(const std::string& atype);

    int get_atomtype_int(std::string atype_s);

// pdb format conversion, eg C4* -> C4', see old_2_new
    std::string format_rna(const std::string oldstr);

    std::string protein_tri2sin(const std::string &str_tri);

}

#endif
