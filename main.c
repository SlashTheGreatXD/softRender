#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
const double PI = 3.141592653589793;
float angle = PI / 2;
//Tea cup Credit Stanford https://graphics.stanford.edu/courses/cs148-10-summer/as3/code/as3/teapot.obj

static const uint32_t new_piskel_data[1][1024] = {
{
0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff000000, 0xff000000, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff000000, 0xff000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff000000, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 
0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 
0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 
0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 
0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 
0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 
0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 
0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 
0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 
0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 
0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 
0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 
0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 
0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff000000, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff000000, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff000000, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff000000, 0xff000000, 0xff000000, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff3cecff, 0xff000000, 0xff000000, 0xff000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 
0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff
}
};
bool hasNormal = false;
bool hasUV = false;

//Stack implementation
typedef struct {
    int arr[256];
	int pointer;
} byteStack;

typedef struct   {
    float arr[256];
	int pointer;
} floatStack;

//Stack implementation

struct screen {
    int width;
    int height;
    int *R;
    int *G;
    int *B;
    float *depthBuffer;
    float *normalBuffer;
};
typedef struct {
    float x;
    float y;
    float z;
} vertex;



typedef struct {
    int indexes[3];
} face;

typedef struct {
    float x;
    
} plainTriangle;

typedef struct {
    int vertexCount;
    int faceCount;
    int16_t modelFlags;
    vertex  *vertices;
    int *faceVertexa;
    int *faceVertexb;
    int *faceVertexc;
    int *faceVertexNormala;
    int *faceVertexNormalb;
    int *faceVertexNormalc;
    int *faceVertexTexturea;
    int *faceVertexTextureb;
    int *faceVertexTexturec;
    vertex *normals;
    vertex *textureVertices;
    
} model;

typedef struct  {
    float depth;
    float normalX;
    float normalY;
    float normalZ;
    float u;
    float v;
    float x;
    float y;
    
} flatVertex;

typedef struct  {
    flatVertex vertices[2000];
    int pointer;
} flatVertexStack;

typedef struct instance {
    vertex transform;
    vertex scale;
    vertex rotation;
    model model;
} instance;

typedef struct linearPoly   {
    float depthA;
    float depthB;
    float normalA;
    float normalB;
    float uA;
    float uB;
    float vA;

} linearPoly;


void setVertex(vertex v[], int index, float x, float y, float z) {
    v[index].x = x;
    v[index].y = y;
    v[index].z = z;
}
void setFace(model m,int index , int a, int b, int c)   {
    m.faceVertexa[index] = a;
    m.faceVertexb[index] = b;
    m.faceVertexc[index] = c;
}
vertex transformedVertices[20000];
float transformedVerticesDistances[20000];
float near = 0.1;
float far = 1000.0;
byteStack polygonStack;
floatStack depthStack; 
floatStack normalStack;
floatStack uStack;
floatStack vStack;


model parseObjFile(char name[]) {
    model object;
    FILE *readfptr = fopen(name,"r");
    if (readfptr == NULL)   {
        printf("\nUh Error %s not found \n", name);
        fclose(readfptr);
        return object;
    }
    int verts = 0;
    int faces = 0;
    int texuredVerts = 0;
    int normalVerts = 0;
    int vt = 0;
    char stringBuffer[150];
    while(fgets(stringBuffer, 150, readfptr)) {
        if (stringBuffer[0] == 'f') {
            faces = faces + 1;
        }
        if (stringBuffer[0] == 'v') {
            if (stringBuffer[1] == 'n') {
                normalVerts = normalVerts + 1;
            }
            else if (stringBuffer[1] == 't')  {
                texuredVerts = texuredVerts + 1;
            }
            else    {
                verts = verts + 1;
            }
        }
    }
    //fclose(readfptr);
    rewind(readfptr);
    //readfptr = fopen(name,"r");
    object.faceVertexa = malloc(faces * sizeof(int));
    object.faceVertexb = malloc(faces * sizeof(int));
    object.faceVertexc = malloc(faces * sizeof(int));
    if (normalVerts > 0) {
        object.faceVertexNormala = malloc(faces * sizeof(int));
        object.faceVertexNormalb = malloc(faces * sizeof(int));
        object.faceVertexNormalc = malloc(faces * sizeof(int));
    }
    if (texuredVerts > 0)   {
        object.faceVertexTexturea = malloc(faces * sizeof(int));
        object.faceVertexTextureb = malloc(faces * sizeof(int));
        object.faceVertexTexturec = malloc(faces * sizeof(int));
    }
    object.vertices = malloc(verts * sizeof(vertex));
    object.vertexCount = verts;
    object.faceCount = faces;
    int currVert = 0;
    int currFace = 0;
    while( fgets(stringBuffer, 150, readfptr) ) {
        int i = 2;
        if (stringBuffer[0] == 'f') {
            int a = atoi(stringBuffer + i) - 1;
            while (stringBuffer[i] != ' ')   {
                i = i + 1;
            }
            int b = atoi(stringBuffer + i) - 1;
            i = i + 1;
            while (stringBuffer[i] != ' ')   {
                i = i + 1;
            }
            int c = atoi(stringBuffer + i) - 1;
            setFace(object,currFace,a,b,c);
            currFace = currFace + 1;
            //printf("%d %d %d \n",a,b,c);
            
        }
        else if (stringBuffer[0] == 'v') {
            float a = atof(stringBuffer + i);
            while (stringBuffer[i] != ' ')   {
                i = i + 1;
            }
            float b = atof(stringBuffer + i);
            i = i + 1;
            while (stringBuffer[i] != ' ')   {
                i = i + 1;
            }
            float c = atof(stringBuffer + i);
            setVertex(object.vertices, currVert, a, b, c);
            currVert = currVert + 1;
        }
    }
    fclose(readfptr);
    
    return object;
}

typedef struct screen sScreen;

void drawPixel(sScreen buffer,int x,int y,int r,int g,int b)    {
    int index = x + y * buffer.width;
    buffer.R[index] = r;
    buffer.G[index] = g;
    buffer.B[index] = b;
}

int drawLine( sScreen buffer,int x1, int y1, int x2,int y2,int r,int g,int b)	{
//Bresenham's line algorithm
	int dX = fabs(x2 - x1);
    int sX;
    if (x1 < x2)	{
    sX = 1;
    }
    else	{
    sX = -1;
    }
    int dY = 0 - fabs(y2 - y1);
    int sY;
    if (y1 < y2)	{
    sY = 1;
    }
    else	{
    sY = -1;
    }
    
    int error = dX + dY;
    int x = x1;
    int y = y1;
    int e2;
    while (true)	{
    	int index = x + y * buffer.width;
    	buffer.R[index] = r;
        buffer.G[index] = g;
        buffer.B[index] = b;
        e2 = 2 * error;
    	if(e2 >= dY)	{
        	if (x == x2)	{break;}
            error = error + dY;
        	x = x + sX;
        }
        if (e2 <= dX)	{
        	if ( y == y2) {break;}
           	error = error + dX;
            y = y + sY;
        	}
        }
        return 5;
    }
int drawEdgeLine( sScreen buffer,flatVertex *a, flatVertex *b)	{
//Bresenham's line algorithm
    //     flatVertex slope;
    //     slope.x = b->x - a->x;
    //     slope.y = b->y - a->y;
    //     slope.depth = b->depth - a->depth;
        
    // 	int dX = fabs(b->x - a->x);
    //     int sX;
    //     if (a->x < b->x)	{
    //     sX = 1;
    //     }
    //     else	{
    //     sX = -1;
    //     }
    //     int dY = 0 - fabs(b->y - a->y);
    //     int sY = 1;
        
    //     int error = dX + dY;
    //     int x = a->a;
    //     int y = a->y;
    // int e2;
    // while (true)	{
    // 	int index = x + y * buffer.width;
    // 	buffer.R[index] = r;
    //     buffer.G[index] = g;
    //     buffer.B[index] = b;
    //     e2 = 2 * error;
    //     if (e2 <= dX)	{
    //     	if ( y == y2) {break;}
    //       	error = error + dX;
    //       	//pushStack(polygonStack,y);
    //       	//printf("%d \n",x);
    //       	//polygonStack.arr[polygonStack.pointer] = x;
    //       	//polygonStack.pointer = polygonStack.pointer + 1;
           	
    //         y = y + sY;
    //     	}
    // 	if(e2 >= dY)	{
    //     	if (x == x2)	{break;}
    //         error = error + dY;
    //     	x = x + sX;
    //         }
    //     }
         return 5;
     }
void fillLine( sScreen buffer,int x1, int y1, int x2,int y2,int r,int g,int b)  {
    int dX = fabs(x2 - x1);
    int sX;
    int width = buffer.width;
    if (x1 < x2)	{
    sX = 1;
    }
    else	{
    sX = -1;
    }
    int dY = 0 - fabs(y2 - y1);
    int sY;
    if (y1 < y2)	{
    sY = 1;
    }
    else	{
    sY = -1;
    }
    
    int error = dX + dY;
    int x = x1;
    int y = y1;
    int e2;
    int index = x + y * width;
    while (true)	{
    	buffer.R[index] = r;
        buffer.G[index] = g;
        buffer.B[index] = b;
        e2 = 2 * error;
        if (e2 <= dX)	{
        	if ( y == y2) {break;}
           	error = error + dX;
           	polygonStack.pointer = polygonStack.pointer - 1;
           	int end = polygonStack.arr[polygonStack.pointer];
           	int i = index;
           	int tx = x;
           	//printf("Starts at %d then goes to %d", tx, end);
           	while (tx <= end)    {
           	    buffer.R[i] = r;
                buffer.G[i] = g;
                buffer.B[i] = b;
           	    i = i + 1;
           	    tx = tx + 1;
           	    }
            y = y + sY;
            index = index + sY * width;
        	}
    	if(e2 >= dY)	{
        	if (x == x2)	{break;}
            error = error + dY;
        	x = x + sX;
        	index = index + sX;
            }
        }
        return;
    }

void drawUnformatedPolygon(sScreen buffer, int x1, int y1, int x2, int y2, int x3, int y3, int r, int g, int b)	{
    int x2Diff = x2 - x1;
    int y2Diff = y2 - y1;
    int x3Diff = x3 - x1;
    int y3Diff = y3 - y1;
    float slope2 = y2Diff / (float) x2Diff;
    float slope3 = y3Diff/ (float) x3Diff;
    if (slope2 < 0)  {
        if (slope2 > slope3) {
            //drawEdgeLine(buffer,x2, y2, x1, y1, r, g, b);
            fillLine(buffer,x1,y1,x3,y3,r,g,b);
            fillLine(buffer,x3, y3, x2, y2, r, g, b);
            return;
        }
        else  {
            //drawEdgeLine(buffer,x2, y2, x3, y3, r, g, b);
        }
        
        if (slope3 < 0)   {
            if (slope2 > slope3)    {
                //fillLine(buffer,x3,y3,x1,y1,r,g,b);
                //drawEdgeLine(buffer,x3, y3, x1, y1, r, g, b);
            }
            else    {
                //drawEdgeLine(buffer,x3, y3, x1, y1, r, g, b);
            }
            fillLine(buffer,x1,y1,x2,y2,r,g,b);
        }
        else    {
            fillLine(buffer,x3, y3, x1, y1, r, g, b);
            fillLine(buffer,x1,y1,x2,y2,r,g,b);
        }
        
    }
    else    {
        if (slope3 < slope2)    {
            //drawEdgeLine(buffer,x1, y1, x3, y3, r, g, b);
            fillLine(buffer,x3, y3, x2, y2, r, g, b);
            fillLine(buffer,x2,y2,x1,y1,r,g,b);
        }
        else    {
            //drawEdgeLine(buffer,x1, y1, x2, y2, r, g, b);
            //drawEdgeLine(buffer,x2, y2, x3, y3, r, g, b);
            fillLine(buffer,x3,y3,x1,y1,r,g,b);
        }
        
    }
    drawPixel(buffer,x1,y1,255,25,25);
    drawPixel(buffer,x2,y2,25,255,25);
    drawPixel(buffer,x3,y3,25,25,255);

    return;
}
int drawPolygon(sScreen buffer, int x1, int y1, int x2, int y2, int x3, int y3, int r, int g, int b)   {
    int nx1;
    int ny1;
    int nx2;
    int ny2;
    int nx3;
    int ny3;
    if (x1 <= x2 && x1 <= x3) {
        nx1 = x1;
        ny1 = y1;
        if (y2 < y3)    {
            nx2 = x2;
            ny2 = y2;
            nx3 = x3;
            ny3 = y3;
            
        }
        else    {
            nx2 = x3;
            ny2 = y3;
            nx3 = x2;
            ny3 = y2;
            
        }
    }
    else if(x2 <= x1 && x2 <= x3)   {
        nx1 = x2;
        ny1 = y2;
        if (y1 < y3)    {
            nx2 = x1;
            ny2 = y1;
            nx3 = x3;
            ny3 = y3;
        }
        else    {
            nx2 = x3;
            ny2 = y3;
            nx3 = x1;
            ny3 = y1;
        }
        
    }
    else    {
        nx1 = x3;
        ny1 = y3;
        if (y2 < y1)    {
            nx2 = x2;
            ny2 = y2;
            nx3 = x1;
            ny3 = y1;
        }
        else    {
            nx2 = x1;
            ny2 = y1;
            nx3 = x2;
            ny3 = y2;
        }
        
    }
    drawUnformatedPolygon( buffer, nx1, ny1, nx2, ny2, nx3, ny3, r, g, b);
    if (polygonStack.pointer == 0)  {
        return 5;
    }
    //Stack IncorrectlyUsed
    return 5;
}
int drawDepthEdgeLine( sScreen buffer, flatVertex *a, flatVertex *b, flatVertexStack *hStack)	{
//Bresenham's line algorithm
	flatVertex slope;
    slope.x = b->x - a->x;
    slope.y = b->y - a->y;
    slope.depth = b->depth - a->depth;
    
    flatVertex current;
    current.x = a->x;
    current.y = a->y;
    current.depth = a->depth;
    

	int dX = fabs(b->x - a->x);
    int sX;
    if (a->x < b->x)	{
    sX = 1;
    }
    else	{
    sX = -1;
    }
    int dY = 0 - fabs(b->y - a->y);
    int sY = 1;
    
    int error = dX + dY;
    int x = a->x;
    int y = a->y;
    int e2;
    //float depthStep = (depthB - depthA)/ (y2 - y1);
    //if (y2 - y1 < 0)    {
    // depthStep = 1;
    //}
    //float depth = depthA;
    while (true)	{
    	int index = x + y * buffer.width;
        e2 = 2 * error;
        if (current.depth < buffer.depthBuffer[index])   {
            buffer.depthBuffer[index] = current.depth;
        }
        
        if(e2 >= dY)	{
        	if (x > (int) b->x)	{break;}
            error = error + dY;
        	x = x + sX;
            }
        
        if (e2 <= dX)	{
        	if ( y > (int)b->y) {break;}
           	error = error + dX;
           	hStack->vertices[hStack->pointer].depth = current.depth;
           	hStack->vertices[hStack->pointer].x = current.x;
           	hStack->pointer += 1;
           	
           	current.depth += slope.depth;
            y = y + sY;
        	}
    }
        return 5;
    }
    
void fillDepthLine( sScreen buffer, flatVertex *a, flatVertex *b, flatVertexStack *hStack)  {
    flatVertex slope;
    slope.x = b->x - a->x;
    slope.y = b->y - a->y;
    slope.depth = b->depth - a->depth;
    
    flatVertex current;
    current.x = a->x;
    current.y = a->y;
    current.depth = a->depth;
    

	int dX = fabs(b->x - a->x);
    int sX;
    if (a->x < b->x)	{
    sX = 1;
    }
    else	{
    sX = -1;
    }
    int dY = 0 - fabs(b->y - a->y);
    int sY;
    if (a->y < b->y)	{
    sY = 1;
    }
    else	{
    sY = -1;
    }
    
    int error = dX + dY;
    int x = a->x;
    int y = a->y;
    int e2;
    int index = x + y * buffer.width;
    while (true)	{
        if (current.depth < buffer.depthBuffer[index])    {
            buffer.depthBuffer[index] = current.depth;
        }
        e2 = 2 * error;
        if (e2 <= dX)	{
        	if ( y <= (int)b->y) {break;}
           	error = error + dX;
           	polygonStack.pointer = polygonStack.pointer - 1;
           	int end = polygonStack.arr[polygonStack.pointer];
           	depthStack.pointer = depthStack.pointer - 1;
           	float endDepth = depthStack.arr[depthStack.pointer];
           	float horizontalDepth = current.depth;
           	float horizontalChange = (endDepth - current.depth) / (end - x);
           	int i = index;
           	int tx = x;
           	//printf("Starts at %d then goes to %d", tx, end);
           	while (tx <= end)    {
           	    if (horizontalDepth < buffer.depthBuffer[i])    {
           	        buffer.depthBuffer[i] = horizontalDepth;
           	    }
           	    i = i + 1;
           	    tx = tx + 1;
           	    horizontalDepth = horizontalDepth + horizontalChange;
           	    }
           	current.depth = current.depth - horizontalChange;
            y = y + sY;
            index = index + sY * buffer.width;
        	}
    	if(e2 >= dY)	{
        	if (x <= (int)b->x)	{break;}
            error = error + dY;
        	x = x + sX;
        	index = index + sX;
            }
        }
        return;
    }
void drawUnformatedDepthPolygon(sScreen buffer, flatVertex *a, flatVertex *b, flatVertex *c)	{
    flatVertexStack hStack;
    hStack.pointer=0;
    polygonStack.pointer = 0;
    int x2Diff = b->x - a->x;
    int y2Diff = b->y - a->y;
    int x3Diff = c->x - a->x;
    int y3Diff = c->y - a->y;
    float slope2 = y2Diff / (float) x2Diff;
    float slope3 = y3Diff/ (float) x3Diff;
    if (slope2 < 0)  {
        if (slope2 > slope3) {
            drawDepthEdgeLine(buffer, b, a, &hStack);
            fillDepthLine(buffer, a, c, &hStack);
            fillDepthLine(buffer, c, b, &hStack);
            return;
        }
        drawDepthEdgeLine(buffer, b, c, &hStack);
        
        if (slope3 < 0)   {
            if (slope2 > slope3)    {
                drawDepthEdgeLine(buffer, c, a, &hStack);
            }
            else    {
                drawDepthEdgeLine(buffer, c, a, &hStack);
            }
            fillDepthLine(buffer, a, b, &hStack);
        }
        else    {
            fillDepthLine(buffer, c, a, &hStack);
            fillDepthLine(buffer, a, b, &hStack);
        }
        
        
    }
    else    {
        if (slope3 < slope2)    {
            drawDepthEdgeLine(buffer, a, c, &hStack);
            fillDepthLine(buffer, c, b, &hStack);
            fillDepthLine(buffer, b, a, &hStack);
        }
        else    {
        drawDepthEdgeLine(buffer, a, b, &hStack);
        drawDepthEdgeLine(buffer, b, c, &hStack);
        fillDepthLine(buffer, c, a, &hStack);
        }
        
    }

    return;
}
int drawDepthPolygon(sScreen buffer, flatVertex *a, flatVertex *b, flatVertex *c)    {
    flatVertex *na;
    flatVertex *nb;
    flatVertex *nc;
    if (a->x <= b->x && a->x <= c->x) {
        na = a;
        if (b->y < c->y)    {
            nb = b;
            nc = c;
        }
        else    {
            nb = c;
            nc = b;
            
        }
    }
    else if(b->x <= a->x && b->x <= c->x)   {
        na = b;
        if (a->y < c->y)    {
            nb = a;
            nc = c;
        }
        else    {
            nb = c;
            nc = a;
        }
        
    }
    else    {
        na = c;
        if (b->y < a->y)    {
            nb = b;
            nc = a;
        }
        else    {
            nb = a;
            nc = b;
        }
        
    }
    drawUnformatedDepthPolygon( buffer, na, nb, nc);
    if (polygonStack.pointer == 0)  {
        return 5;
    }
    //Stack IncorrectlyUsed
    return 6;
}

int renderSprite(int *targetR, int *targetG, int *targetB, int targetWidth, int targetHeight, int *source,int left,int top,int width,int height)  {
    int y = 0;
    while(y < height)   {
        int x = 0;
        while (x < width) {
            int color = source[x + width * y];
            targetR[x + left + targetWidth * (y + top)] =  (color) & 255;
            targetG[x + left + targetWidth * (y + top)] = (color >> 8 ) & 255;
            targetB[x + left + targetWidth * (y + top)] = (color >> 16) & 255;
            x = x + 1;
        }
        y = y + 1;
    }
    return 5;
}
int initBuffer(sScreen buffer)    {
    int i = 0;
    while (i < buffer.width * buffer.height)    {
        buffer.depthBuffer[i] = 1.0;
        i = i + 1;
    }
    return 5;
    
}
void clipPolygon(flatVertex *a, flatVertex *b, flatVertex *c,flatVertex *d) {
    return;
}
void renderModel(sScreen buffer, model object, vertex transform, vertex scale, vertex rotation)  {
    //https://learnopengl.com/Guest-Articles/2020/Skeletal-Animation
    float s = sin(angle);
    float c = cos(angle);
    float xsin = sin(rotation.x);
    float xcos = cos(rotation.x);
    float ysin = sin(rotation.y);
    float ycos = cos(rotation.y);
    float zsin = sin(rotation.z);
    float zcos = cos(rotation.z);
    //printf("s %f c %f \n",s,c);
    int width = buffer.width;
    int height = buffer.height;
    int i = 0;
    while (i < object.vertexCount) {
        float z = object.vertices[i].z * scale.z;
        float x = object.vertices[i].x * scale.x;
        float y = object.vertices[i].y * scale.y;
        //printf("x: %f y: %f z: %f \n",x,y,z);
        float rx = (z * c - x * s) + transform.x;
        float rz = (z * s + x * c) + transform.z;
        //float rx = x;
        //float rz = z;
        float px = rx * ((width / 2) / rz);
        float py = y * ((width / 2) / rz);
        transformedVertices[i].x =  (px + width / 2);//(x * 0.7 + z * 0.3);
        transformedVertices[i].y =  (py + height / 2);
        transformedVertices[i].z =  (rz);//(x * 0.3 + z * 0.7);
        float distance = (rz / far - near / far) / (1 - near / far);
        transformedVerticesDistances[i] = distance;
        i = i + 1;
    }
    //printf("%d",object.faceCount);
    i = 0;
    while (i < object.faceCount)  {
        int i1 = object.faceVertexa[i];
        int i2 = object.faceVertexb[i];
        int i3 = object.faceVertexc[i];
        flatVertex a;
        flatVertex b;
        flatVertex c;
        flatVertex d;
        a.x = transformedVertices[i1].x;
        a.y = transformedVertices[i1].y;
        a.depth = transformedVerticesDistances[i1];
        
        b.x = transformedVertices[i2].x;
        b.y = transformedVertices[i2].y;
        b.depth = transformedVerticesDistances[i2];
        
        c.x = transformedVertices[i3].x;
        c.y = transformedVertices[i3].y;
        c.depth = transformedVerticesDistances[i3];
        clipPolygon(&a,&b,&c,&d);
        
        drawDepthPolygon(buffer, &a, &b, &c);
        //transformedVertices[b].y
        i = i + 1;
    }
    return;
}
void renderInstance(sScreen buffer, instance object)    {
    renderModel(buffer,object.model,object.transform, object.scale, object.rotation);
    return;
}



int main()
{
    time_t start = time(NULL);
    struct screen screenA;
    screenA.width = 640 / 4;
    screenA.height = 480 / 4;
    screenA.R = malloc(screenA.width * screenA.height * sizeof(int));
    screenA.G = malloc(screenA.width * screenA.height * sizeof(int));
    screenA.B = malloc(screenA.width * screenA.height * sizeof(int));
    screenA.depthBuffer = malloc(screenA.width * screenA.height * sizeof(float));
    initBuffer(screenA);
    //polygonStack;
    polygonStack.pointer = 0;
    depthStack.pointer = 0;

    int width = screenA.width;
    int height = screenA.height;
    int *R = screenA.R;
    int *G = screenA.G;
    int *B = screenA.B;
    int j = 0;
    while(j < height)   {
        int i = 0;
        while (i < width)   {
            R[i + j * width] = i % 256;
            G[i + j * width] = j % 256;
            B[i + j * width] = 0;
            i = i + 1;
        }
        j = j + 1;
        
    }
    model bunny = parseObjFile("bunny.obj");
    instance rabbit;
    rabbit.model = bunny;
    rabbit.transform.x = 0;
    rabbit.transform.y = 0;
    rabbit.transform.z = 600;
    rabbit.scale.x = 50;
    rabbit.scale.y = 50;
    rabbit.scale.z = 50;
    instance wabbit;
    wabbit.model = bunny;
    wabbit.transform.x = 200;
    wabbit.transform.y = 200;
    wabbit.transform.z = 500;
    wabbit.scale.x = 30;
    wabbit.scale.y = 30;
    wabbit.scale.z = 30;
    instance mabbit;
    mabbit.model = bunny;
    mabbit.transform.x = -300;
    mabbit.transform.y = -100;
    mabbit.transform.z = 500;
    mabbit.scale.x = 20;
    mabbit.scale.y = 40;
    mabbit.scale.z = 50;

    FILE *fptr = fopen("output.ppm", "w");
    int frames = 8;
    fprintf(fptr, "P5 \n%d %d \n255\n", width, height * frames);
    int t = 0;
    while (t < frames)  {
        initBuffer(screenA);
        renderInstance(screenA, rabbit);
        renderInstance(screenA, wabbit);
        renderInstance(screenA, mabbit);
        int j = 0;
        while(j < height)   {
            int i = 0;
            while (i < width)   {
                int aintDepth = (int) (255 * (screenA.depthBuffer[i + j * width]));
                if (aintDepth > 255)    {
                    aintDepth = 255;
                }
                if (aintDepth < 0)  {
                    aintDepth = 0;
                }
                //printf("%u ", aintDepth);
                fprintf(fptr, "%c", aintDepth);
                i = i + 1;
            }
            j = j + 1;
        }
        t = t + 1;
        angle = angle + PI / 16;
    }
    fclose(fptr);

    time_t buff = time(NULL);
    
    time_t end = time(NULL);
    
    free(screenA.R);
    free(screenA.G);
    free(screenA.B);
    return 0;
}