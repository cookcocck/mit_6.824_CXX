#ifndef LAB1_LAB1_INCLUDE_MASTER_MASTER_H_
#define LAB1_LAB1_INCLUDE_MASTER_MASTER_H_

#include "../bqueue/bqueue.h"
#include "../task/task.h"

class Master {
 public:
  char **getFiles() const;
  void setFiles(char **files);

  explicit Master() = delete;
  explicit Master(char **files, int nReduce);

 private:
  char **m_files;
  int m_nReduce;
  BQueue<Task> m_bqueue;
};
#endif //LAB1_LAB1_INCLUDE_MASTER_MASTER_H_
