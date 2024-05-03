/*
  这是一个专门存储及控制变量的文件
  这个文件只对外开放一个函数接口：
    symlook：用于查找变量及创建新的默认变量
*/
#ifndef VAR_H
#define VAR_H

#define NSYMS 20 /* 允许的符号个数 */

struct symtab {
  char *name;
  double value;
};

struct symtab *symlook(char *s);

#endif