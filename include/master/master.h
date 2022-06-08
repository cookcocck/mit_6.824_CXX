#ifndef LAB1_LAB1_INCLUDE_MASTER_MASTER_H_
#define LAB1_LAB1_INCLUDE_MASTER_MASTER_H_

#include "bqueue.hpp"

class Task;
class Master {
 public:
  explicit Master() = delete;
  explicit Master(char **files, int filesCount, int nReduce);

  void initMapTasks();

 private:
  char **m_files;
  int m_filesCount;
  int m_nReduce;
  BQueue<std::shared_ptr<Task>> m_bqueue;
};
#endif //LAB1_LAB1_INCLUDE_MASTER_MASTER_H_
