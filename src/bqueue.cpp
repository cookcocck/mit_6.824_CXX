#include "bqueue/bqueue.h"
template<typename T>
void BQueue<T>::push(const T &value) {
  std::unique_lock ulock(this->m_mutex);
  m_data.push(value);
  m_cv.notify_all();
}

template<typename T>
T BQueue<T>::pop() {
  std::unique_lock ulock(this->m_mutex);
  this->m_cv.wait(ulock, [this]() { return this->m_data.size() > 0; })
      assert(!this->m_data.empty());
  T ret(std::move(this->m_data.front()));
  this->m_data.pop();
  return ret;
}

template<typename T>
size_t BQueue<T>::size() const {
  std::unique_lock ulock(this->m_data);
  return this->m_data.size();
}