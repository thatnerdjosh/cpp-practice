#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>

int main() {
  mongocxx::instance inst{}; // This should be done only once.
  mongocxx::client conn{
     mongocxx::uri{
        "mongodb://root:example@mongo/test?retryWrites=true&w=majority"
     }
  };
  conn.start_session();
}
