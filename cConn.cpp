#include<iostream>
#include "cConn.h"
#include "C:/Program Files/MySQL/MySQL Server 8.0/include/mysql.h"
#include "C:/Program Files/MySQL/MySQL Server 8.0/include/mysqld_error.h"

cConn::cConn()
{
    //ctor
}

cConn::~cConn()
{
    //dtor
}
void cConn::m_conectar_BaseDeDatos(MYSQL *objDatos, char *cConsulta){

if(mysql_real_connect(objDatos,"127.0.0.1","root","Des@rrollo2023","db_pruebas",3306,NULL,0)){
    std::cout<<"\nConectando a la base de datos";

    mysql_query(objDatos, cConsulta);

    if(mysql_error(objDatos)!=NULL){
             std::cout<<"\nRegistro grabado con exito..";
    }
    else{
           std::cout<<"\nError al grabar registro.."<<mysql_error(objDatos);
            system("pause>nul");

    }
}
else{
    std::cout<<"Error al conectarse a la base de datos-->"<<mysql_error(objDatos);
    mysql_close(objDatos);
 }
}
