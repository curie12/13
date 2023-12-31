#include "smm_common.h"
#include "smm_object.h"
#include <string.h>
#define MAX_NODETYPE    7
#define MAX_GRADE       9
#define MAX_NODE        100
static char smmNodeName[SMMNODE_TYPE_MAX][MAX_CHARNAME] = {
       "강의",
       "식당",
       "실험실",
       "집",
       "실험실로이동",
       "음식찬스",
       "축제시간"
};
char* smmObj_getTypeName(int type)
{
      return (char*)smmNodeName[type];
}
//1. 구조체 형식 정의
typedef struct smmObject {
       char name[MAX_CHARNAME];
       int type;
       int credit;
       int energy;
} smmObject_t;

//2. 구조체 배열 변수 정의 
smmObject_t smm_node[MAX_NODE];

#if 0
static char smmObj_name[MAX_NODE][MAX_CHARNAME];
static int smmObj_type[MAX_NODE];
static int smmObj_credit[MAX_NODE];
static int smmObj_energy[MAX_NODE];
#endif


static int smmObj_noNode = 0;

//3. 관련 함수 변경 
//object generation
void smmObj_genNode(char* name, int type, int credit, int energy)
{
    #if 0
    strcpy(smmObj_name[smmObj_noNode], name);
    smmObj_type[smmObj_noNode] = type;
    smmObj_credit[smmObj_noNode] = credit;
    smmObj_energy[smmObj_noNode] = energy;
    #endif

{    
    strcpy(smm_node[smmObj_noNode].name, name);
    smm_node[smmObj_noNode].type = type;
    smm_node[smmObj_noNode].credit = credit;
    smm_node[smmObj_noNode].energy = energy;
    
    smmObj_noNode++;
}
//3. 관련 함수 변경 
char* smmObj_getNodeName(int node_nr)
{
    return smm_node[node_nr].name;
}
//3. 관련 함수 변경 
int smmObj_getNodeType(int node_nr)
{
    return smm_node[node_nr].type;
}
int smmObj_getNodeCredit(int node_nr)
{
    return smm_node[node_nr].credit;
}
int smmObj_getNodeEnergy(int node_nr)
{
    return smm_node[node_nr].energy;
}
