#ifndef LAB1_LAB1_INCLUDE_BQUEUE_BQUEUE_HPP_
#define LAB1_LAB1_INCLUDE_BQUEUE_BQUEUE_HPP_

#include <queue>
#include <condition_variable>

// a simple blocking queue
template<typename T>
class BQueue {
 public:
  void push(T const &value) {
    std::unique_lock ulock(this->m_mutex);
    m_data.push(value);
    m_cv.notify_all();
  }

  T pop() {
    std::unique_lock ulock(this->m_mutex);
    this->m_cv.wait(ulock, [this]() { return this->m_data.size() > 0; })
        assert(!this->m_data.empty());
    T ret(std::move(this->m_data.front()));
    this->m_data.pop();
    return ret;
  }

  size_t size() const {
    std::unique_lock ulock(this->m_data);
    return this->m_data.size();
  }

 private:
  std::queue<T> m_data;
  std::condition_variable m_cv;
  std::mutex m_mutex;
};
#endif //LAB1_LAB1_INCLUDE_BQUEUE_BQUEUE_HPP_
