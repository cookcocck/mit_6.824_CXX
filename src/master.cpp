#include "master/master.h"

Master::Master(char **files, int nReduce) : m_files(files), m_nReduce(nReduce) {

}

char **Master::getFiles() const {
  return m_files;
}

void Master::setFiles(char **files) {
  m_files = files;
}