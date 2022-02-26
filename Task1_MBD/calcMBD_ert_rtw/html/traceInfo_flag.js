function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["calcMBD.c:37c34"]=1;
    this.traceFlag["calcMBD.c:44c34"]=1;
    this.traceFlag["calcMBD.c:51c34"]=1;
    this.traceFlag["calcMBD.c:58c34"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["calcMBD.c:37"]=1;
    this.lineTraceFlag["calcMBD.c:44"]=1;
    this.lineTraceFlag["calcMBD.c:51"]=1;
    this.lineTraceFlag["calcMBD.c:58"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
