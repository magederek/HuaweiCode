
#include "route.h"
#include "lib_record.h"
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

struct Edge{
    Edge(int i, int e, int w){index = i; end = e; weight = w;}
    int index;
    int end;
    int weight;
};

vector< vector<Edge> > Graph;


bool Valid() {

}

//你要完成的功能总入口
void search_route(char *topo[5000], int edge_num, char *demand)
{
    unsigned short result[] = {2, 6, 3};//示例中的一个解

    for (int i = 0; i < 3; i++)
        record_result(result[i]);

    int index, start, end, weight;

    Graph.resize(edge_num+1);

    for(int i = 0; i < edge_num; i++) {
        sscanf(topo[i], "%d,%d,%d,%d", &index, &start, &end, &weight);

        Graph[start].push_back( Edge(index, end, weight) );

    }
}




