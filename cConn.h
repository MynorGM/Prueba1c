#ifndef CCONN_H
#define CCONN_H
//Bibliiotecas para la conexi�n a la base de datos
#include "C:/Program Files/MySQL/MySQL Server 8.0 CE/include/mysql.h"
#include "C:/Program Files/MySQL/MySQL Server 8.0 CE/include/mysqld_error.h"

class cConn
{
    public:
        cConn();
        void m_conectar_BaseDeDatos(MYSQL *objDatos, char *cConsulta);
        virtual ~cConn();

    protected:

    private:
};

#endif // CCONN_H
