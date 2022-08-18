#include <iostream>
#include <sqlite3.h>

int main(int argc, char* argv[])
{
    sqlite3* db;
    int rc = 0;
    rc = sqlite3_open("test.db", &db);

    if (rc) {
        std::cout << "can't open db: %s\n" << sqlite3_errmsg(db);
        return 1;
    } else {
        std::cout << "Success!" << std::endl;
    }
    sqlite3_close(db);
    return 0;
}
