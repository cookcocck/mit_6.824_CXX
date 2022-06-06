//
// Created by Xiaobo Huang (huangxiaobo.hxb@bytedance.com) on 2022/6/6.
// 
//
#include "master/master.h"

char **Master::getFiles() const {
  return _files;
}

void Master::setFiles(char **files) {
  _files = files;
}