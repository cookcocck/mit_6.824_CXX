//
// Created by Xiaobo Huang (huangxiaobo.hxb@bytedance.com) on 2022/6/6.
// 
//

#include "master/master.h"
#include "spdlog/async_logger.h"

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Usage: lab1 file1 file2 file3...\n");
    return EXIT_FAILURE;
  }
  Master *master = new Master;
  master->setFiles(argv);
  return EXIT_SUCCESS;
}