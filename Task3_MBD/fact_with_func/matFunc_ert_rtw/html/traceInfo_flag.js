function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["matFunc.c:38c17"]=1;
    this.traceFlag["matFunc.c:38c44"]=1;
    this.traceFlag["matFunc.c:39c20"]=1;
    this.traceFlag["matFunc.c:39c27"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["matFunc.c:37"]=1;
    this.lineTraceFlag["matFunc.c:38"]=1;
    this.lineTraceFlag["matFunc.c:39"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
