#ifndef LAB1_LAB1_INCLUDE_TASK_TASK_H_
#define LAB1_LAB1_INCLUDE_TASK_TASK_H_
class Task {
 public:
  explicit Task() = delete;
  explicit Task(char *file);

 private:
  char *m_file;
};
#endif //LAB1_LAB1_INCLUDE_TASK_TASK_H_
