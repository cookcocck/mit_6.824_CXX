//
// Created by Xiaobo Huang (huangxiaobo.hxb@bytedance.com) on 2022/6/6.
// 
//

#ifndef LAB1_LAB1_INCLUDE_MASTER_MASTER_H_
#define LAB1_LAB1_INCLUDE_MASTER_MASTER_H_

class Master {
 public:
  char **getFiles() const;
  void setFiles(char **files);

  explicit Master() = default;
 private:
  char **_files;
  int nReduce;
};
#endif //LAB1_LAB1_INCLUDE_MASTER_MASTER_H_
