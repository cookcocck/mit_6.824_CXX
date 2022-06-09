#include "master.h"
#include "task.h"

Master::Master(char **files, int filesCount, int nReduce)
    : m_files(files), m_filesCount(filesCount), m_nReduce(nReduce) {
  initMapTasks();
}

void Master::initMapTasks() {
  for (int i = 0; i < m_filesCount; ++i) {
    m_bqueue.push(std::make_shared<Task>(m_files[i]));
  }
}