#include <sqlite3.h>
#include <bits/stdc++.h>

int main(int argc, char **argv){

    sqlite3 * DBsqlite;
    bool connect = sqlite3_open("banco_de_dados.bd", &DBsqlite);

    if(connect){
        std::cerr << "Erro ao conectar ao banco de dados!" << sqlite3_errmsg(DBsqlite) << std::endl;
        return 1;
    }else{
        std::cout << "Banco de dados conectado com sucesso!" << std::endl;
        sqlite3_close(DBsqlite);
    }
}