/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/usr/local/Cellar/nim/0.17.2/nim/lib -o /Users/joshuahorwitz/nim/ChatApp/nimcache/future.o /Users/joshuahorwitz/nim/ChatApp/nimcache/future.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg;
typedef struct tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw;
typedef struct tyObject_AsyncFilecolonObjectType__FOwUW0XSSxm8sZ1ubj9b52w tyObject_AsyncFilecolonObjectType__FOwUW0XSSxm8sZ1ubj9b52w;
typedef struct tyObject_FuturecolonObjectType__80u9bn9aLY6K9bjx4fUTV9axAw tyObject_FuturecolonObjectType__80u9bn9aLY6K9bjx4fUTV9axAw;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_AssertionError_8FC9arcap3s5ZtfMs75krtA tyObject_AssertionError_8FC9arcap3s5ZtfMs75krtA;
typedef struct tyObject_CallbackList_tKSBWiaJMWD3JZxwqg7UFQ tyObject_CallbackList_tKSBWiaJMWD3JZxwqg7UFQ;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
typedef struct {
N_NIMCALL_PTR(tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg*, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc_3cmVDZYspcmD9a16VGUFJoA;
struct tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA {
  RootObj Sup;
NI colonstate_;
tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg* retFuture1;
tyProc_3cmVDZYspcmD9a16VGUFJoA nameIterVar2;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
struct tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw {
  RootObj Sup;
NI colonstate_;
tyObject_AsyncFilecolonObjectType__FOwUW0XSSxm8sZ1ubj9b52w* file1;
tyObject_FuturecolonObjectType__80u9bn9aLY6K9bjx4fUTV9axAw* future2;
NimStringDesc* data3;
tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg* future4;
tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA* colonup_;
};
typedef NU8 tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ;
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
Exception* up;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc_KeeAOYBd84Ofsw6Y7LizaQ;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc_KeeAOYBd84Ofsw6Y7LizaQ raiseAction;
};
typedef N_CLOSURE_PTR(tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg*, TM_tzmcDN081pRa3TpslAKwpw_8) (void);
struct tyObject_AssertionError_8FC9arcap3s5ZtfMs75krtA {
  Exception Sup;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc_IIomJ6ptE6vfJ5zRbATgkQ;
typedef N_CLOSURE_PTR(void, TM_tzmcDN081pRa3TpslAKwpw_10) (void);
struct tyObject_CallbackList_tKSBWiaJMWD3JZxwqg7UFQ {
tyProc_IIomJ6ptE6vfJ5zRbATgkQ function;
tyObject_CallbackList_tKSBWiaJMWD3JZxwqg7UFQ* next;
};
struct tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg {
  RootObj Sup;
tyObject_CallbackList_tKSBWiaJMWD3JZxwqg7UFQ callbacks;
NIM_BOOL finished;
Exception* error;
NimStringDesc* errorStackTrace;
NimStringDesc* stackTrace;
NI id;
NimStringDesc* fromProc;
};
struct tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg {
  tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg Sup;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_AsyncFilecolonObjectType__FOwUW0XSSxm8sZ1ubj9b52w {
int fd;
NI64 offset;
};
struct tyObject_FuturecolonObjectType__80u9bn9aLY6K9bjx4fUTV9axAw {
  tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg Sup;
NimStringDesc* value;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
N_NIMCALL(tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg*, readFiles_JMpdAIF79bnK69asqOUFYTTw)(void);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef_quYJR5HSf9cc3EMKLlZ3uaw)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg*, newFuture_cw7L2Vu5pdfKvHqESZUwnA)(NimStringDesc* fromProc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_NIMCALL(void, Marker_tyRef_KLId60cb4YKKY9bJDuZta3Q)(void* p, NI op);
N_CLOSURE(tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg*, readFilesIter_ucg3VRoZuTRVqexuXP0iEQ)(void* ClE_0);
N_NIMCALL(tyObject_AsyncFilecolonObjectType__FOwUW0XSSxm8sZ1ubj9b52w*, openAsync_YJQHehbpgKpQm7mXsAkHhQ)(NimStringDesc* filename, tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(tyObject_FuturecolonObjectType__80u9bn9aLY6K9bjx4fUTV9axAw*, readAll_cJY5g63iDuW4yD3kta7VIw_2)(tyObject_AsyncFilecolonObjectType__FOwUW0XSSxm8sZ1ubj9b52w* f);
N_NIMCALL(NimStringDesc*, read_j9cbdpE8x9bVebNlOUd9ae5qA)(tyObject_FuturecolonObjectType__80u9bn9aLY6K9bjx4fUTV9axAw* future);
N_NIMCALL(tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg*, write_8OwGh1XAWzaV8Sa5hnQOmg)(tyObject_AsyncFilecolonObjectType__FOwUW0XSSxm8sZ1ubj9b52w* f, NimStringDesc* data);
N_NIMCALL(void, read_EYgDXwwneJeAEUfXLUHmhg)(tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg* future);
N_NIMCALL(void, close_iu9cFZN3yHXDJSoj2l6cnjw)(tyObject_AsyncFilecolonObjectType__FOwUW0XSSxm8sZ1ubj9b52w* f);
N_NIMCALL(void, complete_mvHczm6KlNpTkVsXGCEbgg_2)(tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg* future);
N_CLOSURE(void, cb0_Csq26irwsJqvfQSqh7cPZw)(void* ClE_0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
static N_INLINE(NIM_BOOL, finished_lnX3UZC8cmCUb7BzjNqokQasyncdispatch)(tyProc_3cmVDZYspcmD9a16VGUFJoA x);
N_NIMCALL(NIM_BOOL, finished_jn4eVK3zFIl4kShRnlTsCg)(tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg* future);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(void, callbackeq__9c5z7ouO5bUylgKxaZoIuVg_2)(tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg* future, tyProc_IIomJ6ptE6vfJ5zRbATgkQ cb);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, fail_8buDkIPh9aRg7WBcB15eisA)(tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg* future, Exception* error);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, waitFor_VIKMhEBTNLqEA2ZGnacjrw)(tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg* fut);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* theStackBottom);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_ospathsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_ospathsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_heapqueueInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_heapqueueDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_typetraitsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_typetraitsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_optionsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_optionsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_dequesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_dequesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_asyncfuturesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_asyncfuturesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_asyncstreamsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_asyncstreamsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_nativesocketsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_nativesocketsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_setsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_setsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_kqueueInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_kqueueDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_selectorsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_selectorsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_asyncdispatchInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_asyncdispatchDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_asyncfileInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_asyncfileDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void);
NIM_EXTERNC N_NOINLINE(void, futureDatInit000)(void);
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA_;
TNimType NTI_zXhxbfBNs4jZjuxYlyJeRA_;
extern TNimType NTI_xHTZrq9aYs6boc9bCba0JbpQ_;
extern TNimType NTI_zXD0JrbeCNyAaW4E6fB9aqg_;
extern TNimType NTI_3cmVDZYspcmD9a16VGUFJoA_;
TNimType NTI_quYJR5HSf9cc3EMKLlZ3uaw_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
TNimType NTI_0rgu9ad7W9bmsKfODYSgAsvw_;
extern TNimType NTI_h9b5S63RDOlEYbgLEOxjl3w_;
extern TNimType NTI_vnhJgWLKYp0PSzekvaMHEw_;
extern TNimType NTI_IPdYES9cLWlRlcD0lECASkA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI_KLId60cb4YKKY9bJDuZta3Q_;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TNimType NTI_TmgWlPUbRr7iGD2UE1cu6A_;
extern TNimType NTI_8FC9arcap3s5ZtfMs75krtA_;
extern Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
STRING_LITERAL(TM_tzmcDN081pRa3TpslAKwpw_3, "readFiles", 9);
STRING_LITERAL(TM_tzmcDN081pRa3TpslAKwpw_5, "test.txt", 8);
STRING_LITERAL(TM_tzmcDN081pRa3TpslAKwpw_6, "Hello!\012", 7);
STRING_LITERAL(TM_tzmcDN081pRa3TpslAKwpw_9, "Async procedure ($1) yielded `nil`, are you await\'ing a `nil` F"
"uture\?", 69);
static N_NIMCALL(void, Marker_tyRef_quYJR5HSf9cc3EMKLlZ3uaw)(void* p, NI op) {
	tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA* a;
	a = (tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA*)p;
	nimGCvisit((void*)(*a).retFuture1, op);
	nimGCvisit((void*)(*a).nameIterVar2.ClE_0, op);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "gc.nim");
	nimln_(196, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	popFrame();
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(138, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(216, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "gc.nim");
	nimln_(223, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(224, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "gc.nim");
	nimln_(269, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		nimln_(378, "system.nim");
		nimln_(269, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	nimln_(270, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		nimln_(378, "system.nim");
		nimln_(270, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	nimln_(271, "gc.nim");
	(*dest) = src;
	popFrame();
}
static N_NIMCALL(void, Marker_tyRef_KLId60cb4YKKY9bJDuZta3Q)(void* p, NI op) {
	tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw* a;
	a = (tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw*)p;
	nimGCvisit((void*)(*a).file1, op);
	nimGCvisit((void*)(*a).future2, op);
	nimGCvisit((void*)(*a).data3, op);
	nimGCvisit((void*)(*a).future4, op);
	nimGCvisit((void*)(*a).colonup_, op);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr_("asgnRefNoCycle", "gc.nim");
	nimln_(276, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		nimln_(378, "system.nim");
		nimln_(276, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		nimln_(277, "gc.nim");
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		nimln_(278, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	nimln_(279, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		nimln_(378, "system.nim");
		nimln_(279, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		nimln_(280, "gc.nim");
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		nimln_(281, "gc.nim");
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			nimln_(282, "gc.nim");
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	nimln_(283, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_CLOSURE(tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg*, readFilesIter_ucg3VRoZuTRVqexuXP0iEQ)(void* ClE_0) {
	tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg* result;
	tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw* colonenvP_;
	nimfr_("readFilesIter", "asyncmacro.nim");
{	result = (tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg*)0;
	colonenvP_ = (tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw*) ClE_0;
	switch ((*colonenvP_).colonstate_) {
	case -1: goto BeforeRet_;
	case 0: goto STATE0;
	case 1: goto STATE1;
	case 2: goto STATE2;
	}
	STATE0: ;
	nimln_(4, "future.nim");
	asgnRefNoCycle((void**) (&(*colonenvP_).file1), openAsync_YJQHehbpgKpQm7mXsAkHhQ(((NimStringDesc*) &TM_tzmcDN081pRa3TpslAKwpw_5), ((tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 2)));
	nimln_(5, "future.nim");
	asgnRef((void**) (&(*colonenvP_).future2), readAll_cJY5g63iDuW4yD3kta7VIw_2((*colonenvP_).file1));
	(*colonenvP_).colonstate_ = ((NI) 1);
	nimln_(126, "asyncmacro.nim");
	result = &(*colonenvP_).future2->Sup;
	goto BeforeRet_;
	STATE1: ;
	nimln_(5, "future.nim");
	asgnRefNoCycle((void**) (&(*colonenvP_).data3), read_j9cbdpE8x9bVebNlOUd9ae5qA((*colonenvP_).future2));
	nimln_(6, "future.nim");
	printf("%s\012", (*colonenvP_).data3? ((*colonenvP_).data3)->data:"nil");
	fflush(stdout);
	nimln_(7, "future.nim");
	asgnRef((void**) (&(*colonenvP_).future4), write_8OwGh1XAWzaV8Sa5hnQOmg((*colonenvP_).file1, ((NimStringDesc*) &TM_tzmcDN081pRa3TpslAKwpw_6)));
	(*colonenvP_).colonstate_ = ((NI) 2);
	nimln_(126, "asyncmacro.nim");
	result = &(*colonenvP_).future4->Sup;
	goto BeforeRet_;
	STATE2: ;
	read_EYgDXwwneJeAEUfXLUHmhg((*colonenvP_).future4);
	nimln_(8, "future.nim");
	close_iu9cFZN3yHXDJSoj2l6cnjw((*colonenvP_).file1);
	nimln_(337, "asyncmacro.nim");
	complete_mvHczm6KlNpTkVsXGCEbgg_2((*(*colonenvP_).colonup_).retFuture1);
	(*colonenvP_).colonstate_ = ((NI) -1);
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

static N_INLINE(NIM_BOOL, finished_lnX3UZC8cmCUb7BzjNqokQasyncdispatch)(tyProc_3cmVDZYspcmD9a16VGUFJoA x) {
	NIM_BOOL result;
	nimfr_("finished", "system.nim");
	result = (NIM_BOOL)0;
	nimln_(3289, "system.nim");
	      result = ((NI*) x.ClE_0)[1] < 0;
      
	popFrame();
	return result;
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	nimfr_("getCurrentException", "system.nim");
	result = (Exception*)0;
	nimln_(3240, "system.nim");
	result = currException_9bVPeDJlYTi9bQApZpfH8wjg;
	popFrame();
	return result;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currException_9bVPeDJlYTi9bQApZpfH8wjg), (*currException_9bVPeDJlYTi9bQApZpfH8wjg).up);
}

N_CLOSURE(void, cb0_Csq26irwsJqvfQSqh7cPZw)(void* ClE_0) {
	tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA* colonenvP_;
	TSafePoint TM_tzmcDN081pRa3TpslAKwpw_7;
	nimfr_("cb0", "asyncmacro.nim");
	colonenvP_ = (tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA*) ClE_0;
	nimln_(32, "asyncmacro.nim");
	pushSafePoint(&TM_tzmcDN081pRa3TpslAKwpw_7);
	TM_tzmcDN081pRa3TpslAKwpw_7.status = _setjmp(TM_tzmcDN081pRa3TpslAKwpw_7.context);
	if (TM_tzmcDN081pRa3TpslAKwpw_7.status == 0) {
		nimln_(33, "asyncmacro.nim");
		{
			NIM_BOOL T4_;
			tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg* next;
			T4_ = (NIM_BOOL)0;
			T4_ = finished_lnX3UZC8cmCUb7BzjNqokQasyncdispatch((*colonenvP_).nameIterVar2);
			if (!!(T4_)) goto LA5_;
			nimln_(34, "asyncmacro.nim");
			next = (*colonenvP_).nameIterVar2.ClP_0((*colonenvP_).nameIterVar2.ClE_0);
			nimln_(35, "asyncmacro.nim");
			{
				if (!(next == NIM_NIL)) goto LA9_;
				nimln_(36, "asyncmacro.nim");
				{
					NIM_BOOL T13_;
					NimStringDesc* msg;
					tyObject_AssertionError_8FC9arcap3s5ZtfMs75krtA* volatile e;
					nimln_(393, "asyncmacro.nim");
					T13_ = (NIM_BOOL)0;
					T13_ = finished_jn4eVK3zFIl4kShRnlTsCg((*colonenvP_).retFuture1);
					if (!!(T13_)) goto LA14_;
					nimln_(37, "asyncmacro.nim");
					msg = copyString(((NimStringDesc*) &TM_tzmcDN081pRa3TpslAKwpw_9));
					e = (tyObject_AssertionError_8FC9arcap3s5ZtfMs75krtA*)0;
					nimln_(2702, "system.nim");
					e = (tyObject_AssertionError_8FC9arcap3s5ZtfMs75krtA*) newObj((&NTI_TmgWlPUbRr7iGD2UE1cu6A_), sizeof(tyObject_AssertionError_8FC9arcap3s5ZtfMs75krtA));
					(*e).Sup.Sup.m_type = (&NTI_8FC9arcap3s5ZtfMs75krtA_);
					nimln_(39, "asyncmacro.nim");
					asgnRefNoCycle((void**) (&(*e).Sup.message), nsuFormatSingleElem(msg, ((NimStringDesc*) &TM_tzmcDN081pRa3TpslAKwpw_3)));
					nimln_(2697, "system.nim");
					asgnRef((void**) (&(*e).Sup.parent), NIM_NIL);
					nimln_(39, "asyncmacro.nim");
					raiseException((Exception*)e, "AssertionError");
				}
				LA14_: ;
			}
			goto LA7_;
			LA9_: ;
			{
				tyProc_IIomJ6ptE6vfJ5zRbATgkQ T17_;
				nimln_(43, "asyncmacro.nim");
				memset((void*)(&T17_), 0, sizeof(T17_));
				T17_.ClP_0 = cb0_Csq26irwsJqvfQSqh7cPZw; T17_.ClE_0 = colonenvP_;
				callbackeq__9c5z7ouO5bUylgKxaZoIuVg_2(next, T17_);
			}
			LA7_: ;
		}
		LA5_: ;
		popSafePoint();
	}
	else {
		popSafePoint();
		setFrame((TFrame*)&FR_);
		{
			TM_tzmcDN081pRa3TpslAKwpw_7.status = 0;
			nimln_(48, "asyncmacro.nim");
			{
				NIM_BOOL T22_;
				nimln_(393, "asyncmacro.nim");
				T22_ = (NIM_BOOL)0;
				T22_ = finished_jn4eVK3zFIl4kShRnlTsCg((*colonenvP_).retFuture1);
				if (!T22_) goto LA23_;
				nimln_(51, "asyncmacro.nim");
				reraiseException();
			}
			goto LA20_;
			LA23_: ;
			{
				Exception* T26_;
				nimln_(393, "asyncmacro.nim");
				nimln_(53, "asyncmacro.nim");
				T26_ = (Exception*)0;
				T26_ = getCurrentException();
				fail_8buDkIPh9aRg7WBcB15eisA((*colonenvP_).retFuture1, T26_);
			}
			LA20_: ;
			popCurrentException();
		}
	}
	if (TM_tzmcDN081pRa3TpslAKwpw_7.status != 0) reraiseException();
	popFrame();
}

N_NIMCALL(tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg*, readFiles_JMpdAIF79bnK69asqOUFYTTw)(void) {
	tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg* result;
	tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA* colonenv_;
	tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw* colonenv__2;
	tyProc_3cmVDZYspcmD9a16VGUFJoA T1_;
	tyProc_IIomJ6ptE6vfJ5zRbATgkQ T2_;
	nimfr_("readFiles", "future.nim");
{	result = (tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg*)0;
	colonenv_ = (tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA*)0;
	nimln_(3, "future.nim");
	colonenv_ = (tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA*) newObj((&NTI_quYJR5HSf9cc3EMKLlZ3uaw_), sizeof(tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA));
	(*colonenv_).Sup.m_type = (&NTI_zXhxbfBNs4jZjuxYlyJeRA_);
	asgnRef((void**) (&(*colonenv_).retFuture1), newFuture_cw7L2Vu5pdfKvHqESZUwnA(((NimStringDesc*) &TM_tzmcDN081pRa3TpslAKwpw_3)));
	nimln_(29, "asyncmacro.nim");
	colonenv__2 = (tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw*)0;
	nimln_(393, "asyncmacro.nim");
	colonenv__2 = (tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw*) newObj((&NTI_KLId60cb4YKKY9bJDuZta3Q_), sizeof(tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw));
	(*colonenv__2).Sup.m_type = (&NTI_0rgu9ad7W9bmsKfODYSgAsvw_);
	nimln_(3, "future.nim");
	asgnRef((void**) (&(*colonenv__2).colonup_), colonenv_);
	memset((void*)(&T1_), 0, sizeof(T1_));
	T1_.ClP_0 = readFilesIter_ucg3VRoZuTRVqexuXP0iEQ; T1_.ClE_0 = colonenv__2;
	asgnRef((void**) (&(*colonenv_).nameIterVar2.ClE_0), T1_.ClE_0);
	(*colonenv_).nameIterVar2.ClP_0 = T1_.ClP_0;
	nimln_(393, "asyncmacro.nim");
	memset((void*)(&T2_), 0, sizeof(T2_));
	T2_.ClP_0 = cb0_Csq26irwsJqvfQSqh7cPZw; T2_.ClE_0 = colonenv_;
	T2_.ClE_0? T2_.ClP_0(T2_.ClE_0):((TM_tzmcDN081pRa3TpslAKwpw_10)(T2_.ClP_0))();
	nimln_(4, "future.nim");
	nimln_(393, "asyncmacro.nim");
	result = (*colonenv_).retFuture1;
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner(void) {
	systemInit000();
	stdlib_parseutilsDatInit000();
	stdlib_mathDatInit000();
	stdlib_algorithmDatInit000();
	stdlib_strutilsDatInit000();
	stdlib_timesDatInit000();
	stdlib_posixDatInit000();
	stdlib_ospathsDatInit000();
	stdlib_osDatInit000();
	stdlib_hashesDatInit000();
	stdlib_tablesDatInit000();
	stdlib_heapqueueDatInit000();
	stdlib_typetraitsDatInit000();
	stdlib_optionsDatInit000();
	stdlib_dequesDatInit000();
	stdlib_asyncfuturesDatInit000();
	stdlib_asyncstreamsDatInit000();
	stdlib_nativesocketsDatInit000();
	stdlib_setsDatInit000();
	stdlib_netDatInit000();
	stdlib_kqueueDatInit000();
	stdlib_selectorsDatInit000();
	stdlib_macrosDatInit000();
	stdlib_asyncdispatchDatInit000();
	stdlib_asyncfileDatInit000();
	futureDatInit000();
	stdlib_parseutilsInit000();
	stdlib_mathInit000();
	stdlib_algorithmInit000();
	stdlib_strutilsInit000();
	stdlib_timesInit000();
	stdlib_posixInit000();
	stdlib_ospathsInit000();
	stdlib_osInit000();
	stdlib_hashesInit000();
	stdlib_tablesInit000();
	stdlib_heapqueueInit000();
	stdlib_typetraitsInit000();
	stdlib_optionsInit000();
	stdlib_dequesInit000();
	stdlib_asyncfuturesInit000();
	stdlib_asyncstreamsInit000();
	stdlib_nativesocketsInit000();
	stdlib_setsInit000();
	stdlib_netInit000();
	stdlib_kqueueInit000();
	stdlib_selectorsInit000();
	stdlib_macrosInit000();
	stdlib_asyncdispatchInit000();
	stdlib_asyncfileInit000();
}

void PreMain(void) {
	void (*volatile inner)(void);
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void) {
	tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg* T1_;
	nimfr_("future", "future.nim");
	nimln_(10, "future.nim");
	T1_ = (tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg*)0;
	T1_ = readFiles_JMpdAIF79bnK69asqOUFYTTw();
	waitFor_VIKMhEBTNLqEA2ZGnacjrw(T1_);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, futureDatInit000)(void) {
static TNimNode* TM_tzmcDN081pRa3TpslAKwpw_2[3];
static TNimNode* TM_tzmcDN081pRa3TpslAKwpw_4[6];
static TNimNode TM_tzmcDN081pRa3TpslAKwpw_0[11];
NTI_zXhxbfBNs4jZjuxYlyJeRA_.size = sizeof(tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA);
NTI_zXhxbfBNs4jZjuxYlyJeRA_.kind = 17;
NTI_zXhxbfBNs4jZjuxYlyJeRA_.base = (&NTI_13RNkKqUOX1TtorOUlKtqA_);
TM_tzmcDN081pRa3TpslAKwpw_2[0] = &TM_tzmcDN081pRa3TpslAKwpw_0[1];
TM_tzmcDN081pRa3TpslAKwpw_0[1].kind = 1;
TM_tzmcDN081pRa3TpslAKwpw_0[1].offset = offsetof(tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA, colonstate_);
TM_tzmcDN081pRa3TpslAKwpw_0[1].typ = (&NTI_xHTZrq9aYs6boc9bCba0JbpQ_);
TM_tzmcDN081pRa3TpslAKwpw_0[1].name = ":state";
TM_tzmcDN081pRa3TpslAKwpw_2[1] = &TM_tzmcDN081pRa3TpslAKwpw_0[2];
TM_tzmcDN081pRa3TpslAKwpw_0[2].kind = 1;
TM_tzmcDN081pRa3TpslAKwpw_0[2].offset = offsetof(tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA, retFuture1);
TM_tzmcDN081pRa3TpslAKwpw_0[2].typ = (&NTI_zXD0JrbeCNyAaW4E6fB9aqg_);
TM_tzmcDN081pRa3TpslAKwpw_0[2].name = "retFuture1";
TM_tzmcDN081pRa3TpslAKwpw_2[2] = &TM_tzmcDN081pRa3TpslAKwpw_0[3];
TM_tzmcDN081pRa3TpslAKwpw_0[3].kind = 1;
TM_tzmcDN081pRa3TpslAKwpw_0[3].offset = offsetof(tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA, nameIterVar2);
TM_tzmcDN081pRa3TpslAKwpw_0[3].typ = (&NTI_3cmVDZYspcmD9a16VGUFJoA_);
TM_tzmcDN081pRa3TpslAKwpw_0[3].name = "nameIterVar2";
TM_tzmcDN081pRa3TpslAKwpw_0[0].len = 3; TM_tzmcDN081pRa3TpslAKwpw_0[0].kind = 2; TM_tzmcDN081pRa3TpslAKwpw_0[0].sons = &TM_tzmcDN081pRa3TpslAKwpw_2[0];
NTI_zXhxbfBNs4jZjuxYlyJeRA_.node = &TM_tzmcDN081pRa3TpslAKwpw_0[0];
NTI_quYJR5HSf9cc3EMKLlZ3uaw_.size = sizeof(tyObject_Env_libslashpureslashasyncmacrodotnim__zXhxbfBNs4jZjuxYlyJeRA*);
NTI_quYJR5HSf9cc3EMKLlZ3uaw_.kind = 22;
NTI_quYJR5HSf9cc3EMKLlZ3uaw_.base = (&NTI_zXhxbfBNs4jZjuxYlyJeRA_);
NTI_quYJR5HSf9cc3EMKLlZ3uaw_.marker = Marker_tyRef_quYJR5HSf9cc3EMKLlZ3uaw;
NTI_0rgu9ad7W9bmsKfODYSgAsvw_.size = sizeof(tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw);
NTI_0rgu9ad7W9bmsKfODYSgAsvw_.kind = 17;
NTI_0rgu9ad7W9bmsKfODYSgAsvw_.base = (&NTI_13RNkKqUOX1TtorOUlKtqA_);
TM_tzmcDN081pRa3TpslAKwpw_4[0] = &TM_tzmcDN081pRa3TpslAKwpw_0[5];
TM_tzmcDN081pRa3TpslAKwpw_0[5].kind = 1;
TM_tzmcDN081pRa3TpslAKwpw_0[5].offset = offsetof(tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw, colonstate_);
TM_tzmcDN081pRa3TpslAKwpw_0[5].typ = (&NTI_h9b5S63RDOlEYbgLEOxjl3w_);
TM_tzmcDN081pRa3TpslAKwpw_0[5].name = ":state";
TM_tzmcDN081pRa3TpslAKwpw_4[1] = &TM_tzmcDN081pRa3TpslAKwpw_0[6];
TM_tzmcDN081pRa3TpslAKwpw_0[6].kind = 1;
TM_tzmcDN081pRa3TpslAKwpw_0[6].offset = offsetof(tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw, file1);
TM_tzmcDN081pRa3TpslAKwpw_0[6].typ = (&NTI_vnhJgWLKYp0PSzekvaMHEw_);
TM_tzmcDN081pRa3TpslAKwpw_0[6].name = "file1";
TM_tzmcDN081pRa3TpslAKwpw_4[2] = &TM_tzmcDN081pRa3TpslAKwpw_0[7];
TM_tzmcDN081pRa3TpslAKwpw_0[7].kind = 1;
TM_tzmcDN081pRa3TpslAKwpw_0[7].offset = offsetof(tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw, future2);
TM_tzmcDN081pRa3TpslAKwpw_0[7].typ = (&NTI_IPdYES9cLWlRlcD0lECASkA_);
TM_tzmcDN081pRa3TpslAKwpw_0[7].name = "future2";
TM_tzmcDN081pRa3TpslAKwpw_4[3] = &TM_tzmcDN081pRa3TpslAKwpw_0[8];
TM_tzmcDN081pRa3TpslAKwpw_0[8].kind = 1;
TM_tzmcDN081pRa3TpslAKwpw_0[8].offset = offsetof(tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw, data3);
TM_tzmcDN081pRa3TpslAKwpw_0[8].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_tzmcDN081pRa3TpslAKwpw_0[8].name = "data3";
TM_tzmcDN081pRa3TpslAKwpw_4[4] = &TM_tzmcDN081pRa3TpslAKwpw_0[9];
TM_tzmcDN081pRa3TpslAKwpw_0[9].kind = 1;
TM_tzmcDN081pRa3TpslAKwpw_0[9].offset = offsetof(tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw, future4);
TM_tzmcDN081pRa3TpslAKwpw_0[9].typ = (&NTI_zXD0JrbeCNyAaW4E6fB9aqg_);
TM_tzmcDN081pRa3TpslAKwpw_0[9].name = "future4";
TM_tzmcDN081pRa3TpslAKwpw_4[5] = &TM_tzmcDN081pRa3TpslAKwpw_0[10];
TM_tzmcDN081pRa3TpslAKwpw_0[10].kind = 1;
TM_tzmcDN081pRa3TpslAKwpw_0[10].offset = offsetof(tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw, colonup_);
TM_tzmcDN081pRa3TpslAKwpw_0[10].typ = (&NTI_quYJR5HSf9cc3EMKLlZ3uaw_);
TM_tzmcDN081pRa3TpslAKwpw_0[10].name = ":up";
TM_tzmcDN081pRa3TpslAKwpw_0[4].len = 6; TM_tzmcDN081pRa3TpslAKwpw_0[4].kind = 2; TM_tzmcDN081pRa3TpslAKwpw_0[4].sons = &TM_tzmcDN081pRa3TpslAKwpw_4[0];
NTI_0rgu9ad7W9bmsKfODYSgAsvw_.node = &TM_tzmcDN081pRa3TpslAKwpw_0[4];
NTI_KLId60cb4YKKY9bJDuZta3Q_.size = sizeof(tyObject_Env_libslashpureslashasyncmacrodotnim__0rgu9ad7W9bmsKfODYSgAsvw*);
NTI_KLId60cb4YKKY9bJDuZta3Q_.kind = 22;
NTI_KLId60cb4YKKY9bJDuZta3Q_.base = (&NTI_0rgu9ad7W9bmsKfODYSgAsvw_);
NTI_KLId60cb4YKKY9bJDuZta3Q_.marker = Marker_tyRef_KLId60cb4YKKY9bJDuZta3Q;
}

