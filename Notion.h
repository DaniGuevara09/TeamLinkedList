//
// Created by Jairo Riaño on 12/09/24.
//

#ifndef LKPROJECT_NOTION_H
#define LKPROJECT_NOTION_H
#include <string>

class Notion {
public:
    Notion();
    Notion(int,std::string);
    void setId( int );
    void setName( std::string );
    int getId();
    std::string getName();
    ~Notion();
private:
    int id;
    std::string name;

};


#endif //LKPROJECT_NOTION_H
