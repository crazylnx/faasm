#include <edge/edge.h>

int main() {
    std::string port = "8001";

    util::initLogging();

    edge::RestServer server;
    server.listen(port);

    return 0;
}