//
// Created by Xiaobo Huang (huangxiaobo.hxb@bytedance.com) on 2022/6/9.
// 
//

#ifndef LAB1_LAB1_INCLUDE_WORKER_WORKER_H_
#define LAB1_LAB1_INCLUDE_WORKER_WORKER_H_

#include <vector>
#include <string>

typedef void (*MapFn)(std::string, std::string);
typedef std::string (*ReduceFn)(std::string, std::vector<std::string>);

class Worker {
 public:
  explicit Worker() = delete;
  explicit Worker(MapFn mapFn, ReduceFn reduceFn);


 private:
  MapFn m_mapFn;
  ReduceFn m_reduceFn;
};

#endif //LAB1_LAB1_INCLUDE_WORKER_WORKER_H_
