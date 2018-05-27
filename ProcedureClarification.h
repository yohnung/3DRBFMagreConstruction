// commom procedure declarification header file
void CrdTrf2FlyDirec(int, Point*, double[][Dim], double*, double*, double*);
void specifyDegree(double*, double*);
void ZAxisCrdTrans(double, double[Dim]);
void YAxisCrdTrans(double, double[Dim]);
void XAxisCrdTrans(double, double[Dim]);
void constructNodesWeb(double*, double*, Point*, Point*, double*);
void initiateGridPoint(double*, double*, Point*);
void CrdTrfFromFlyDirec(int, double*, Point*, double[][Dim], Point*, Point*, double*);
void CrdTrfFromFlyDirec(int, double*, Point*);
void CrdTrf2MinVarDir(int, Point*, double[][Dim], double*, Point*, Point*, double*, double*, double*);
void CrdTrf2MinVarDir(int, double*, Point*);
void MVAfunction(Point*, double[][Dim], double*);
void specifyAY(double[][N_Alpha], double*, double[][Dim], Point*, int, BasicFunction*);
void specifyAplus(double[][N_Alpha], Point*, int, BasicFunction*);
void generalSolver(double*, Point*, double[][Dim], int, BasicFunction*);
double LinearLUSolver(double*, double[][N_Alpha], double*, int);
void LinearQRSolver(double*, double[][N_Alpha], double*, int, double*);
void LinearSVDSolver(double*, double[][N_Alpha], double*, int, double*, double);
void write(double[][N_Alpha], int, ofstream&);
void write(double[][Dim], int, ofstream&);
void write(double *, int, ofstream&);
void write(Point*, int, ofstream&);
void write_tecplot(Point*, double[][Dim], int, ofstream&);
void write_tecplot(Point*, double[][Dim], double[][Dim], int, ofstream&);
void write_satellite_position(Point*);