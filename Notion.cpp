//
// Created by Jairo Riaño on 12/09/24.
//

#include "Notion.h"

Notion::Notion() {}
Notion::Notion(int id, std::string name){
    Notion::id = id;
    Notion::name = name;
}

void Notion::setId(int id) {
    Notion::id = id;
}

void Notion::setName( std::string name ){
    Notion::name = name;
}

int Notion::getId() {
    return Notion::id;
}

std::string Notion::getName() {
    return Notion::name;
}

Notion::~Notion(){

}
