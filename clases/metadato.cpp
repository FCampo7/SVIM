#include "metadato.h"

void Metadato::CargarMetadato(std::string f, std::string s){
    contenido.insert(make_pair(f, s) );
}

unsigned int Metadato::TamMet(){
    return contenido.size();
}

void Metadato::VaciarMetadato(){
    contenido.clear();
}

void Metadato::ModifMeta(std::string clave, std::string valor){
    contenido[clave]=valor;
}

std::string Metadato::VerMetadatos(){
    std::string s="";
    for(std::map<std::string, std::string>::iterator it=contenido.begin(); it!=contenido.end(); it++){
        s+=it->first + ": " + it->second + "\n";
    }
    s=s.substr(0, s.length()-1);//Eliminar el ultimo caracter
    return s;
}

std::string Metadato::GuardarMetadatos(){
    std::string s="";
    for(std::map<std::string, std::string>::iterator it=contenido.begin(); it!=contenido.end(); it++){
        s+=it->first + ":" + it->second + ";";
    }
    s=s.substr(0, s.length()-1);//Eliminar el ultimo caracter
    return s;
}
