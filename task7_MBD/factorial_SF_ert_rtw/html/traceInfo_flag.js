function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["factorial_SF.c:40c27"]=1;
    this.traceFlag["factorial_SF.c:41c9"]=1;
    this.traceFlag["factorial_SF.c:42c17"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["factorial_SF.c:37"]=1;
    this.lineTraceFlag["factorial_SF.c:38"]=1;
    this.lineTraceFlag["factorial_SF.c:39"]=1;
    this.lineTraceFlag["factorial_SF.c:40"]=1;
    this.lineTraceFlag["factorial_SF.c:41"]=1;
    this.lineTraceFlag["factorial_SF.c:42"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
