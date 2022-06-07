#ifndef LAB1_LAB1_INCLUDE_BQUEUE_BQUEUE_H_
#define LAB1_LAB1_INCLUDE_BQUEUE_BQUEUE_H_

#include <queue>
#include <condition_variable>

// a simple blocking queue
template<typename T>
class BQueue {
 public:
  void push(T const &value);

  T pop();

  size_t size() const;

 private:
  std::queue<T> m_data;
  std::condition_variable m_cv;
  std::mutex m_mutex;
};
#endif //LAB1_LAB1_INCLUDE_BQUEUE_BQUEUE_H_
