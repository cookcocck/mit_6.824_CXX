#ifndef LAB1_LAB1_INCLUDE_MASTER_TASK_H_
#define LAB1_LAB1_INCLUDE_MASTER_TASK_H_

enum TaskStage {
  MAP = 1,
  REDUCE = 2,
};

struct Task {
  TaskStage stage;
  char *file;

};

#endif //LAB1_LAB1_INCLUDE_MASTER_TASK_H_
