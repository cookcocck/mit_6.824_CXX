

#include <cstdlib>
#include <cstdio>
#include "master.h"
#include "rpc/server.h"
#include "spdlog/spdlog.h"

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Usage: lab1 file1 file2 file3...\n");
    return EXIT_FAILURE;
  }
  Master *master = new Master(argv, argc - 1, 10);
  spdlog::info("Master waiting for workers...");
  rpc::server srv(8888);
  srv.run();
  return EXIT_SUCCESS;
}