#ifndef __LOGGINGSTRINGNODE_H__
#define __LOGGINGSTRINGNODE_H__

// TODO
struct LoggingStringNode_class {
	int  (*compareTo) (void*, void*);
	void (*printNode) (void*);
	void (*insert)    (void*, void*);
	void (*print)     (void*);
 	void (*delete)	  (void*);
};

extern struct LoggingStringNode_class LoggingStringNode_class_table;

struct LoggingStringNode;
struct LoggingStringNode {
	struct LoggingStringNode_class* class;

	struct LoggingStringNode* left;
	struct LoggingStringNode* right;
	char*  s;
	
};

void LoggingStringNode_ctor   (void*, char*);
void LoggingStringNode_insert (void*, void*);
void LoggingStringNode_delete (void*);

void* new_LoggingStringNode (char*);

#endif /*__LOGGINGSTRINGNODE_H__*/
