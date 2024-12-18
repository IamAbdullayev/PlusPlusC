#include <iostream>
#include <string>

using namespace std;


class BackendService {
	public:
		void connect() { cout << "Connected to a generic backend service.\n"; }
		virtual void performTask() { cout << "Performing a generic task.\n"; }
};

class DatabaseService : public BackendService {
	public:
		void connect(string_view connectionString) { cout << "Connected to a database with the given connection string: " << connectionString << endl; }
		void performTask() override { cout << "Performing a database-specific task.\n"; }
};

class APIService : public BackendService {
	public:
		void connect(string_view apiKey) { cout << "Connected to an API with the given API key: " << apiKey << endl; }
		void performTask() override { cout << "Performing an API-specific task.\n"; }
		void connect() { cout << "Connected to an API without an API key.\n"; }
};



int main() {
    BackendService genericService;
    DatabaseService database;
    APIService api;

    genericService.connect(); // Calls the base class method
    genericService.performTask(); // Calls the base class method

    database.connect("db_connection_string"); // Calls the derived class method (overloaded)
    database.performTask(); // Calls the derived class method (overridden)

    api.connect("api_key"); // Calls the derived class method (overloaded with a parameter)
    api.performTask(); // Calls the derived class method (overridden)

    // Method hiding example
    api.connect(); // Calls the derived class method (hiding the base class method)

}
