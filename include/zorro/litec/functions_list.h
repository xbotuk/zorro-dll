// This file contains all Zorro function definitions
// Add new functions to the end
// Function Format:
// C R(ReturnType) F(FunctionName) A((Arguments)) D({ return DF(FunctionName)(Arguments); });

// system functions
C R(int)  F(print)    A((int to,string format,...))         D({ return DF(print)   (to, format); });
C R(int)  F(msg)      A((string format,...))                D({ return DF(msg)     (format); });
C R(HWND) F(window)   A((string title))                     D({ return DF(window)  (title); });
C R(void) F(keys)     A((string format,...))                D({ return DF(keys)    (format); });
C R(int)  F(mouse)    A((int* x,int* y,HWND hwnd))          D({ return DF(mouse)   (x,y,hwnd); });
C R(int)  F(hit)      A((int key))                          D({ return DF(hit)     (key); });
C R(int)  F(progress) A((int n1,int n2))                    D({ return DF(progress)(n1,n2); });
C R(var)  F0(slider)  A((int n,int pos I(0),int lower I(0),int upper I(0),string name I(0),string tooltip I(0) VA))
                                                            D({ return DF0(slider) (n,pos,lower,upper,name,tooltip); });
C R(void) F(sound)    A((string filename))                  D({        DF(sound)   (filename); });

C R(int)   F(login)   A((int mode))                         D({ return DF(login)        (mode); });
C R(int)   F(exec)    A((string name,string args,int mode)) D({ return DF(exec)         (name,args,mode); });
C R(void)  F(quit)    A((string text,...))                  D({        DF(quit)         (text); });
C R(int)   F(memory)  A((int mode))                         D({ return DF(memory)       (mode); });
C R(int)   F(wait)    A((int ms))                           D({ return DF(wait)         (ms); });
C R(var)   F(timer)   A(())                                 D({ return DF(timer)        (); });
C R(int)   F(lock)    A(())                                 D({ return DF(lock)         (); });
C R(void)  F(unlock)  A(())                                 D({        DF(unlock)       (); });
C R(var)   F(version) A(())                                 D({ return DF(version)      (); });
C R(int)   F0(is)     A((long flag))                        D({ return DF0(is)          (flag); });
C R(int)   F1(is)     A((long mode,long flag))              D({ return DF1(is)          (mode,flag); });
C R(void)  F0(set)    A((long flag))                        D({        DF0(set)         (flag); });
C R(void)  F1(set)    A((long* mode, long flag))            D({        DF1(set)         (mode,flag); });
C R(void)  F0(reset)  A((long flag))                        D({        DF0(reset)       (flag); });
C R(void)  F1(reset)  A((long* mode,long flag))             D({        DF1(reset)       (mode,flag); });
C R(int)   F(mode)    A((long flag))                        D({ return DF(mode)         (flag); });
C R(var)   F(xtest)   A((var value))                        D({ return DF(xtest)        (value); });
C R(void*) F(ytest)   A((void* ptr,int mode))               D({ return DF(ytest)        (ptr,mode); });
C R(long)  F(checkLookBack) A((long num))                   D({ return DF(checkLookBack)(num); });

// chart
C R(void)   F(plot)       A((string name,var val,int type,zcolor color))                            D({        DF(plot)      (name,val,type,color); });
C R(void)   F(plotBar)    A((string name,int num,var label,var val,int type,zcolor color))          D({        DF(plotBar)   (name,num,label,val,type,color); });
C R(void)   F(plotGraph)  A((string name,var num,var val,int type,zcolor color))                    D({        DF(plotGraph) (name,num,val,type,color); });
C R(DATA*)  F(plotData)   A((string name))                                                          D({ return DF(plotData)  (name); });
C R(zcolor) F(color)      A((var value,zcolor color1,zcolor color2,zcolor color3,zcolor color4 VA)) D({ return DF(color)     (value,color1,color2,color3,color4); });
C R(zcolor) F(colorScale) A((zcolor color,var factor))                                              D({ return DF(colorScale)(color,factor); });

// price
C R(var) F(price)      A((int offset I(0) VA))                             D({ return DF(price)     (offset); });
C R(var) F(priceOpen)  A((int offset I(0) VA))                             D({ return DF(priceOpen) (offset); });
C R(var) F(priceClose) A((int offset I(0) VA))                             D({ return DF(priceClose)(offset); });
C R(var) F(priceHigh)  A((int offset I(0) VA))                             D({ return DF(priceHigh) (offset); });
C R(var) F(priceLow)   A((int offset I(0) VA))                             D({ return DF(priceLow)  (offset); });
C R(int) F(priceSet)   A((int offset,var open,var high,var low,var close)) D({ return DF(priceSet)  (offset,open,high,low,close); });
C R(int) F(priceQuote) A((var timestamp,var quote))                        D({ return DF(priceQuote)(timestamp,quote); });
C R(var) F(marketVal)  A((int offset I(0) VA))                             D({ return DF(marketVal) (offset); });
C R(var) F(marketVol)  A((int offset I(0) VA))                             D({ return DF(marketVol) (offset); });

// trading
C R(TRADE*) F0(enterLong)  A((int lots I(0),var entry I(0), var stop I(0), var takeprofit I(0), var trail I(0), var trailslope I(0), var traillock I(0), var trailstep I(0) VA))
                              D({ return DF0(enterLong)(lots,entry,stop,takeprofit,trail,trailslope,traillock,trailstep,0); });
C R(TRADE*) F0(enterShort) A((int lots I(0),var entry I(0), var stop I(0), var takeprofit I(0), var trail I(0), var trailslope I(0), var traillock I(0), var trailstep I(0) VA))
                              D({ return DF0(enterShort)(lots,entry,stop,takeprofit,trail,trailslope,traillock,trailstep,0); });
C R(void)   F0(exitLong)   A((string name I(0),var limit I(0),int lots I(0) VA)) D({        DF0(exitLong)  (name,limit,lots); });
C R(void)   F0(exitShort)  A((string name I(0),var limit I(0),int lots I(0) VA)) D({        DF0(exitShort) (name,limit,lots); });
C R(int)    F0(exitTrade)  A((TRADE* tr,var limit I(0),int lots I(0) VA))        D({ return DF0(exitTrade) (tr,limit,lots); });
C R(void)   F(cancelTrade) A((int id))                                           D({        DF(cancelTrade)(id); });
C R(TRADE*) F(forTrade)    A((int mode))                                         D({ return DF(forTrade)   (mode); });
C R(TRADE*) F(findTrade)   A((string name))                                      D({ return DF(findTrade)  (name); });

// options / futures
C R(CONTRACT*) F0(contract)         A((int type,int days,var strike))    D({ return DF0(contract)        (type,days,strike); });
C R(CONTRACT*) F1(contract)         A((CONTRACT* c))                     D({ return DF1(contract)        (c); });
C R(CONTRACT*) F2(contract)         A((TRADE* tr))                       D({ return DF2(contract)        (tr); });
C R(CONTRACT*) F3(contract)         A((int n))                           D({ return DF3(contract)        (n); });
C R(int)       F(contractUpdate)    A((string name,int handle,int mode)) D({ return DF(contractUpdate)   (name,handle,mode); });
C R(var)       F0(contractDays)     A((CONTRACT* c))                     D({ return DF0(contractDays)    (c); });
C R(var)       F1(contractDays)     A((TRADE* tr))                       D({ return DF1(contractDays)    (tr); });
C R(var)       F0(contractPrice)    A((CONTRACT* c))                     D({ return DF0(contractPrice)   (c); });
C R(var)       F1(contractPrice)    A((TRADE* tr))                       D({ return DF1(contractPrice)   (tr); });
C R(int)       F0(contractPosition) A((CONTRACT* c))                     D({ return DF0(contractPosition)(c); });
C R(int)       F1(contractPosition) A((TRADE* tr))                       D({ return DF1(contractPosition)(tr); });
C R(int)       F(contractCheck)     A((TRADE* tr))                       D({ return DF(contractCheck)    (tr); });
C R(void)      F(contractExercise)  A((TRADE* tr,var price I(0) VA))     D({        DF(contractExercise) (tr,price); });

// TODO several contract functions are missing
// http://manual.zorro-trader.com/contract.htm

// algo / asset
C R(int)  F(algo)          A((string name))                                           D({ return DF(algo)         (name); });
C R(int)  F(asset)         A((string name))                                           D({ return DF(asset)        (name); });
C R(int)  F(assetType)     A((string name))                                           D({ return DF(assetType)    (name); });
C R(void) F(assetAdd)      A((string name,var vPrice I(0),var vSpread I(0),var vRollLong I(0),var vRollShort I(0),var vPip I(0),var vPipCost I(0),
	                                      var vMarginCost I(0),var vLeverage I(0),var vLotAmount I(0),var vCommission I(0),string sSymbol I(0)))
                                                                                      D({        DF(assetAdd)     (name,vPrice,vSpread,vRollLong,vRollShort,vPip,vPipCost,vMarginCost,vLeverage,vLotAmount,vCommission,sSymbol); });
C R(int)  F(assetList)     A((string filename))                                       D({ return DF(assetList)    (filename); });
C R(int)  F(assetHistory)  A((string name,int mode))                                  D({ return DF(assetHistory) (name,mode); });
C R(int)  F(brokerAsset)   A((string assetSymbol,var* pPrice,var* pSpread,var* pVol)) D({ return DF(brokerAsset)  (assetSymbol,pPrice,pSpread,pVol); });
C R(var)  F(brokerCommand) A((int command,DWORD parameter))                           D({ return DF(brokerCommand)(command,parameter); });

// panel
C R(int)    F0(panel)    A((int rows,int cols,zcolor color,int size))  D({ return DF0(panel)   (rows,cols,color,size); });
C R(int)    F1(panel)    A((string filename,zcolor color,int size))    D({ return DF1(panel)   (filename,color,size); });
C R(string) F(panelGet)  A((int row,int col))                          D({ return DF(panelGet) (row,col); });
C R(int)    F(panelSet)  A((int row,int col,string text,zcolor color I(0),int style I(0),int type I(0) VA))
                                                                       D({ return DF(panelSet) (row,col,text,color,style,type); });
C R(int)    F(panelSave) A((string filename))                          D({ return DF(panelSave)(filename); });
C R(int)    F(panelLoad) A((string filename))                          D({ return DF(panelLoad)(filename); });

// date/time
C R(int) F(year)          A((int offset I(0) VA))                    D({ return DF(year)         (offset); });       // current year of the simulation
C R(int) F(month)         A((int offset I(0) VA))                    D({ return DF(month)        (offset); });      // current month of the simulation, 1 = January
C R(int) F(week)          A((int offset I(0) VA))                    D({ return DF(week)         (offset); });       // current week number 
C R(int) F(day)           A((int offset I(0) VA))                    D({ return DF(day)          (offset); });        // current day (1..31)
C R(int) F(dom)           A((int offset I(0) VA))                    D({ return DF(dom)          (offset); });        // number of days of the current month, 28..31
C R(int) F(tdm)           A((int offset I(0) VA))                    D({ return DF(tdm)          (offset); });        // trading day of the current month, 1..23
C R(int) F(tom)           A((int offset I(0) VA))                    D({ return DF(tom)          (offset); });        // number of trading days of the current month, 20..23
C R(int) F(dow)           A((int offset I(0) VA))                    D({ return DF(dow)          (offset); });        // current day of the week: 1 = Monday, to 7 = Sunday.
C R(int) F(ldow)          A((int zone, int offset I(0) VA))          D({ return DF(ldow)         (zone,offset); });  // local day of the week
C R(int) F(hour)          A((int offset I(0) VA))                    D({ return DF(hour)         (offset); });       // current hour
C R(int) F(lhour)         A((int zone,int offset I(0) VA))           D({ return DF(lhour)        (zone,offset); }); // local hour in the given time zone
C R(int) F(minute)        A((int offset I(0) VA))                    D({ return DF(minute)       (offset); });     // current minute
C R(var) F(second)        A(())                                      D({ return DF(second)       (); });           // current second
C R(int) F(dst)           A((int zone,int offset I(0) VA))           D({ return DF(dst)          (zone,offset); });   // daylight saving (1 or 0)
C R(int) F(workday)       A((int offset I(0) VA))                    D({ return DF(workday)      (offset); });
C R(int) F(minutesAgo)    A((int offset I(0)))                       D({ return DF(minutesAgo)   (offset); });
C R(var) F(minutesWithin) A((int offset I(0)))                       D({ return DF(minutesWithin)(offset); });
C R(int) F(timeOffset)    A((int zone,int days,int hour,int minute)) D({ return DF(timeOffset)   (zone,days,hour,minute); });
C R(int) F0(market)       A((int zone,int offset))                   D({ return DF0(market)      (zone,offset); });
C R(int) F1(market)       A((int zone))                              D({ return DF1(market)      (zone); });
C R(int) F0(date)         A((int offset))                            D({ return DF0(date)        (offset); });
C R(int) F1(date)         A(())                                      D({ return DF1(date)        (); });
C R(int) F0(tod)          A((int offset))                            D({ return DF0(tod)         (offset); });
C R(int) F1(tod)          A(())                                      D({ return DF1(tod)         (); });
C R(int) F0(ltod)         A((int zone,int offset))                   D({ return DF0(ltod)        (zone,offset); });
C R(int) F1(ltod)         A((int zone))                              D({ return DF1(ltod)        (zone); });
C R(int) F0(tow)          A((int offset))                            D({ return DF0(tow)         (offset); });
C R(int) F1(tow)          A(())                                      D({ return DF1(tow)         (); });
C R(int) F0(ltow)         A((int zone,int offset))                   D({ return DF0(ltow)        (zone,offset); });
C R(int) F1(ltow)         A((int zone))                              D({ return DF1(ltow)        (zone); });
C R(var) F0(wdate)        A((int offset))                            D({ return DF0(wdate)       (offset); });
C R(var) F1(wdate)        A(())                                      D({ return DF1(wdate)       (); });
C R(var) F(wdateBar)      A((int n))                                 D({ return DF(wdateBar)     (n); });
C R(var) F(wdatef)        A((string format,string dateTime))         D({ return DF(wdatef)       (format,dateTime); });

C R(BOOL) F(frame)       A((int offset)) D({ return DF(year)(offset); });
C R(int)  F(frameSync)   A((int period)) D({ return DF(year)(period); });

//saving/loading
C R(void) F(loadStatus)  A((string name))                              D({        DF(loadStatus)(name); });
C R(void) F(saveStatus)  A((string name))                              D({        DF(saveStatus)(name); });
C R(var)  F(getvar)      A((string fileName,string varName))           D({ return DF(getvar)    (fileName,varName); });
C R(void) F(putvar)      A((string fileName,string varName,var value)) D({        DF(putvar)    (fileName,varName,value); });

// string/file
C R(var)     F(strvar)   A((string str,string name,var val))     D({ return DF(strvar)  (str,name,val); });
C R(string)  F(strtext)  A((string str,string name,string text)) D({ return DF(strtext) (str,name,text); });
C R(string)  F0(strdate) A((string format,int offset))           D({ return DF0(strdate)(format,offset); });
C R(string)  F1(strdate) A((string format,var date))             D({ return DF1(strdate)(format,date); });
C R(string)  F(strf)     A((string format,...))                  D({ return DF(strf)    (format); });
C R(string)  F(strx)     A((string str,string orig,string repl)) D({ return DF(strx)    (str,orig,repl); });
C R(string)  F(strxc)    A((string str,char orig,char repl))     D({ return DF(strxc)   (str,orig,repl); });
C R(string)  F(strmid)   A((string str,int first,int count))     D({ return DF(strmid)  (str,first,count); });
C R(int)     F(strcount) A((string str,char c))                  D({ return DF(strcount)(str,c); });
C R(wstring) F(strw)     A((string in))                          D({ return DF(strw)    (in); });

// file
C R(string) F(file_content) A((string name))                               D({ return DF(file_content)(name); });
C R(long)   F(file_read)    A((string name,string content,long size))      D({ return DF(file_read)   (name,content,size); });
C R(long)   F0(file_append) A((string name,string content))                D({ return DF0(file_append)(name,content); });
C R(long)   F1(file_append) A((string name,const void* content,long size)) D({ return DF1(file_append)(name,content,size); });
C R(long)   F(file_write)   A((string name,string content,long size))      D({ return DF(file_write)  (name,content,size); });
C R(long)   F(file_copy)    A((string dest,string src))                    D({ return DF(file_copy)   (dest,src); });
C R(int)    F(file_delete)  A((string name))                               D({ return DF(file_delete) (name); });
C R(long)   F(file_length)  A((string name))                               D({ return DF(file_length) (name); });
C R(long)   F(file_date)    A((string name))                               D({ return DF(file_date)   (name); });
C R(string) F(file_select)  A((string dir,string filter))                  D({ return DF(file_select) (dir,filter); });

// internet 
C R(string) F(http_transfer) A((string url,string data))                                 D({ return DF(http_transfer)(url,data); });
C R(int)    F(http_send)     A((string url,string data,string header))                   D({ return DF(http_send)    (url,data,header); });
C R(int)    F(http_post)     A((string url,string data))                                 D({ return DF(http_post)    (url,data); });
C R(int)    F(http_proxy)    A((string proxy,int port))                                  D({ return DF(http_proxy)   (proxy,port); });
C R(long)   F(http_status)   A((int id))                                                 D({ return DF(http_status)  (id); });
C R(long)   F(http_result)   A((int id,string content,long size))                        D({ return DF(http_result)  (id,content,size); });
C R(int)    F(http_free)     A((int id))                                                 D({ return DF(http_free)    (id); });
C R(int)    F(ftp_download)  A((string url,string path,string username,string password)) D({ return DF(ftp_download) (url,path,username,password); });
C R(int)    F(ftp_upload)    A((string url,string path,string username,string password)) D({ return DF(ftp_upload)   (url,path,username,password); });
C R(int)    F(ftp_getdate)   A((string url,string username,string password))             D({ return DF(ftp_getdate)  (url,username,password); });
C R(void)   F(ftp_stop)      A(())                                                       D({        DF(ftp_stop)     (); });
C R(long)   F(ftp_size)      A(())                                                       D({ return DF(ftp_size)     (); });
C R(long)   F(ftp_sent)      A(())                                                       D({ return DF(ftp_sent)     (); });
C R(long)   F(ftp_timestamp) A(())                                                       D({ return DF(ftp_timestamp)(); });
C R(int)    F(ftp_status)    A(())                                                       D({ return DF(ftp_status)   (); });
C R(int)    F(ftp_log)       A((int mode))                                               D({ return DF(ftp_log)      (mode); });

// dataset
C R(int)    F(dataDownload) A((string code,int mode,int period))                           D({ return DF(dataDownload)(code,mode,period); });
C R(int)    F0(dataParse)   A((int handle,string format,string fileName))                  D({ return DF0(dataParse)  (handle,format,fileName); });
C R(void)   F(dataSave)     A((int handle,string fileName,int start I(0),int num I(0) VA)) D({        DF(dataSave)    (handle,fileName,start,num); });
C R(void)   F(dataSaveCSV)  A((int handle,string format,string name,int start I(0),int num I(0) VA))
                                                                                           D({        DF(dataSaveCSV) (handle,format,name,start,num); });
C R(int)    F(dataLoad)     A((int handle,string fileName,int fields))                     D({ return DF(dataLoad)    (handle,fileName,fields); });
C R(float*) F(dataNew)      A((int handle,int records,int fields))                         D({ return DF(dataNew)     (handle,records,fields); });
C R(void)   F(dataSort)     A((int handle))                                                D({        DF(dataSort)    (handle); });
C R(int)    F(dataMerge)    A((int handle1,int handle2))                                   D({ return DF(dataMerge)   (handle1,handle2); });
C R(int)    F(dataAppend)   A((int handle1,int handle2,int start I(0),int num I(0) VA))    D({ return DF(dataAppend)  (handle1,handle2,start,num); });
C R(int)    F(dataFind)     A((int handle,var date))                                       D({ return DF(dataFind)    (handle,date); });
C R(void)   F0(dataSet)     A((int handle,int row,int col,var value))                      D({        DF0(dataSet)    (handle,row,col,value); });
C R(void)   F1(dataSet)     A((int handle,int row,int col,int value))                      D({        DF1(dataSet)    (handle,row,col,value); });
C R(var)    F(dataVar)      A((int handle,int row,int col))                                D({ return DF(dataVar)     (handle,row,col); });
C R(int)    F(dataInt)      A((int handle,int row,int col))                                D({ return DF(dataInt)     (handle,row,col); });
C R(string) F(dataStr)      A((int handle,int row,int col))                                D({ return DF(dataStr)     (handle,row,col); });

// optimize
C R(var)    F(optimize)     A((var val,var start,var end,var step,var tolerance))      D({ return DF(optimize)(val,start,end,step,tolerance); });
C R(string) F0(loop)        A((const void* p0  I(0),const void* p1  I(0),const void* p2  I(0),const void* p3  I(0),const void* p4  I(0),const void* p5  I(0),const void* p6  I(0),const void* p7  I(0),const void* p8  I(0),const void* p9  I(0),
                               const void* p10 I(0),const void* p11 I(0),const void* p12 I(0),const void* p13 I(0),const void* p14 I(0),const void* p15 I(0),const void* p16 I(0),const void* p17 I(0),const void* p18 I(0),const void* p19 I(0),
                               const void* p20 I(0),const void* p21 I(0),const void* p22 I(0),const void* p23 I(0),const void* p24 I(0),const void* p25 I(0),const void* p26 I(0),const void* p27 I(0),const void* p28 I(0),const void* p29 I(0),
                               const void* p30 I(0),const void* p31 I(0),const void* p32 I(0),const void* p33 I(0),const void* p34 I(0),const void* p35 I(0),const void* p36 I(0),const void* p37 I(0),const void* p38 I(0),const void* p39 I(0) VA))
                               D({ return DF0(loop)(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25,p26,p27,p28,p29,p30,p31,p32,p33,p34,p35,p36,p37,p38,p39); });
C R(var)    F0(adviseLong)  A((int method I(0),var objective I(0),var s0 I(NIL),var s1 I(NIL),var s2 I(NIL),var s3 I(NIL),var s4 I(NIL),var s5 I(NIL),var s6 I(NIL),var s7 I(NIL),var s8 I(NIL),var s9 I(NIL),var s10 I(NIL),
                               var s11 I(NIL),var s12 I(NIL),var s13 I(NIL),var s14 I(NIL),var s15 I(NIL),var s16 I(NIL),var s17 I(NIL),var s18 I(NIL),var s19 I(NIL) VA))
                               D({ return DF0(adviseLong)(method,objective,s0,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19); });
C R(var)    F1(adviseLong)  A((int method,var objective,cvars signals,long numSignals)) D({ return DF1(adviseLong)(method,objective,signals,numSignals); });
C R(var)    F0(adviseShort) A((int method I(0),var objective I(0),var s0 I(NIL),var s1 I(NIL),var s2 I(NIL),var s3 I(NIL),var s4 I(NIL),var s5 I(NIL),var s6 I(NIL),var s7 I(NIL),var s8 I(NIL),var s9 I(NIL),var s10 I(NIL),
                               var s11 I(NIL),var s12 I(NIL),var s13 I(NIL),var s14 I(NIL),var s15 I(NIL),var s16 I(NIL),var s17 I(NIL),var s18 I(NIL),var s19 I(NIL) VA))
                               D({ return DF0(adviseShort)(method,objective,s0,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19); });
C R(var)    F1(adviseShort) A((int method,var objective,cvars signals,long numSignals))
                               D({ return DF1(adviseShort)(method,objective,signals,numSignals); });

// series
C R(vars)       F0(series)   A((var value I(0),int length I(0) VA))       D({ return DF0(series)  (value,length); });
C R(void)       F(shift)     A((vars data,var value,int length))          D({        DF(shift)    (data,value,length); });
C R(vars)       F(rev)       A((cvars data,int length I(0) VA))           D({ return DF(rev)      (data,length); });
C R(void)       F(sortData)  A((vars data,int length))                    D({        DF(sortData) (data,length); });
C R(const int*) F(sortIdx)   A((cvars data,int length))                   D({ return DF(sortIdx)  (data,length); });
C R(var)        F(randomize) A((int method,vars out,cvars in,int length)) D({ return DF(randomize)(method,out,in,length); });

// math
C R(var)    F0(random)  A(())                         D({ return DF0(random) (); });
C R(var)    F1(random)  A((var limit))                D({ return DF1(random) (limit); });
C R(void)   F(seed)     A((int s))                    D({        DF(seed)    (s); });
C R(var)    F(roundto)  A((var val,var step))         D({ return DF(roundto) (val,step); });
C R(var)    F(cdf)      A((var x))                    D({ return DF(cdf)     (x); });
C R(var)    F(qnorm)    A((var x))                    D({ return DF(qnorm)   (x); });
C R(var)    F0(sign)    A((var a))                    D({ return DF0(sign)   (a); });
C R(int)    F1(sign)    A((int a))                    D({ return DF1(sign)   (a); });
C R(var)    F0(ifelse)  A((BOOL c,var a,var b))       D({ return DF0(ifelse) (c,a,b); });
C R(int)    F1(ifelse)  A((BOOL c,int a,int b))       D({ return DF1(ifelse) (c,a,b); });
C R(string) F2(ifelse)  A((BOOL c,string a,string b)) D({ return DF2(ifelse) (c,a,b); });
C R(var)    F0(clamp)   A((var a,var l,var h))        D({ return DF0(clamp)  (a,l,h); });
C R(var)    F1(clamp)   A((int a,int l,int h))        D({ return DF1(clamp)  (a,l,h); });
C R(BOOL)   F0(between) A((var a,var l,var h))        D({ return DF0(between)(a,l,h); });
C R(BOOL)   F1(between) A((int a,int l,int h))        D({ return DF1(between)(a,l,h); });

// curves
C R(BOOL) F(peak)        A((cvars a))         D({ return DF(peak)       (a); });
C R(BOOL) F(valley)      A((cvars a))         D({ return DF(valley)     (a); });
C R(BOOL) F0(crossOver)  A((cvars a,cvars b)) D({ return DF0(crossOver) (a,b); });
C R(BOOL) F1(crossOver)  A((cvars a,var b))   D({ return DF1(crossOver) (a,b); });
C R(BOOL) F0(crossUnder) A((cvars a,cvars b)) D({ return DF0(crossUnder)(a,b); });
C R(BOOL) F1(crossUnder) A((cvars a,var b))   D({ return DF1(crossUnder)(a,b); });
C R(BOOL) F(rising)      A((cvars a))         D({ return DF(rising)     (a); });
C R(BOOL) F(falling)     A((cvars a))         D({ return DF(falling)    (a); });
C R(var)  F(concave)     A((cvars a))         D({ return DF(concave)    (a); });

// fuzzy
C R(BOOL) F(fuzzy)        A((var a))             D({ return DF(fuzzy)       (a); });
C R(BOOL) F(eq)           A((var a,var b))       D({ return DF(eq)          (a,b); });
C R(var)  F(betweenF)     A((var a,var l,var h)) D({ return DF(betweenF)    (a,l,h); });
C R(var)  F(andF)         A((var a,var b))       D({ return DF(andF)        (a,b); });
C R(var)  F(orF)          A((var a,var b))       D({ return DF(orF)         (a,b); });
C R(var)  F(notF)         A((var a))             D({ return DF(notF)        (a); });
C R(var)  F(equalF)       A((var a,var b))       D({ return DF(equalF)      (a,b); });
C R(var)  F(aboveF)       A((var a,var b))       D({ return DF(aboveF)      (a,b); });
C R(var)  F(belowF)       A((var a,var b))       D({ return DF(belowF)      (a,b); });
C R(var)  F(peakF)        A((cvars a))           D({ return DF(peakF)       (a); });
C R(var)  F(valleyF)      A((cvars a))           D({ return DF(valleyF)     (a); });
C R(var)  F(risingF)      A((cvars a))           D({ return DF(risingF)     (a); });
C R(var)  F(fallingF)     A((cvars a))           D({ return DF(fallingF)    (a); });
C R(var)  F0(crossOverF)  A((cvars a,cvars b))   D({ return DF0(crossOverF) (a,b); });
C R(var)  F1(crossOverF)  A((cvars a,var b))     D({ return DF1(crossOverF) (a,b); });
C R(var)  F0(crossUnderF) A((cvars a,cvars b))   D({ return DF0(crossUnderF)(a,b); });
C R(var)  F1(crossUnderF) A((cvars a,var b))     D({ return DF1(crossUnderF)(a,b); });

// matrix
C R(mat) F(matrix)   A((int rows,int cols I(0) VA))   D({ return DF(matrix)  (rows,cols); });
C R(mat) F(matTrans) A((mat m,mat a))                 D({ return DF(matTrans)(m,a); });
C R(mat) F0(matSet)  A((mat m,mat a))                 D({ return DF0(matSet) (m,a); });
C R(mat) F1(matSet)  A((mat m,int row,int col,mat a)) D({ return DF1(matSet) (m,row,col,a); });
C R(mat) F2(matSet)  A((mat m,var c))                 D({ return DF2(matSet) (m,c); });
C R(mat) F(matAdd)   A((mat m,mat a,mat b))           D({ return DF(matAdd)  (m,a,b); });
C R(mat) F(matSub)   A((mat m,mat a,mat b))           D({ return DF(matSub)  (m,a,b); });
C R(mat) F(matMul)   A((mat m,mat a,mat b))           D({ return DF(matMul)  (m,a,b); });
C R(mat) F(matScale) A((mat m,var c))                 D({ return DF(matScale)(m,c); });

// normalize
C R(var) F(center)    A((var x,int timePeriod)) D({ return DF(center)   (x,timePeriod); });
C R(var) F(compress)  A((var x,int timePeriod)) D({ return DF(compress) (x,timePeriod); });
C R(var) F(scale)     A((var x,int timePeriod)) D({ return DF(scale)    (x,timePeriod); });
C R(var) F(normalize) A((var x,int timePeriod)) D({ return DF(normalize)(x,timePeriod); });
C R(var) F(zscore)    A((var x,int timePeriod)) D({ return DF(zscore)   (x,timePeriod); });
C R(var) F(diff)      A((var val))              D({ return DF(diff)     (val); });

// analysis
C R(int) F(predict)           A((int type,cvars data,int timePeriod,var threshold))        D({ return DF(predict)          (type,data,timePeriod,threshold); });
C R(var) F(polyfit)           A((cvars coeff,cvars data,int timePeriod,int n,var weight))  D({ return DF(polyfit)          (coeff,data,timePeriod,n,weight); });
C R(var) F(polynom)           A((cvars coeff,int n))                                       D({ return DF(polynom)          (coeff,n); });
C R(var) F(frechet)           A((cvars data,int timePeriod,var factor,cvars pattern))      D({ return DF(frechet)          (data,timePeriod,factor,pattern); });
C R(var) F(verify)            A((cvars data,int length,var depth,int width,int horizon))   D({ return DF(verify)           (data,length,depth,width,horizon); });
C R(var) F0(markowitz)        A((cvars covMatrix,cvars means,int n,cvars caps))            D({ return DF0(markowitz)       (covMatrix,means,n,caps); });
C R(var) F1(markowitz)        A((cvars covMatrix,cvars means,int n,var cap))               D({ return DF1(markowitz)       (covMatrix,means,n,cap); });
C R(var) F(markowitzReturn)   A((cvars weights,var vVariance))                             D({ return DF(markowitzReturn)  (weights,vVariance); });
C R(var) F(markowitzVariance) A((cvars weights,var vReturn))                               D({ return DF(markowitzVariance)(weights,vReturn); });

// filters
C R(var) F(Gauss)          A((cvars data,int length))                      D({ return DF(Gauss)         (data,length); });
C R(var) F(Median)         A((cvars data,int length))                      D({ return DF(Median)        (data,length); });
C R(var) F(Percentile)     A((cvars data,int length,var percent))          D({ return DF(Percentile)    (data,length,percent); });
C R(var) F(PercentRank)    A((cvars data,int length,var value))            D({ return DF(PercentRank)   (data,length,value); });
C R(var) F(DominantPeriod) A((cvars data,int period))                      D({ return DF(DominantPeriod)(data,period); });
C R(var) F(DominantPhase)  A((cvars data,int period))                      D({ return DF(DominantPhase) (data,period); });
C R(var) F(HighPass1)      A((cvars data,int cutoff))                      D({ return DF(HighPass1)     (data,cutoff); });
C R(var) F(HighPass)       A((cvars data,int cutoff))                      D({ return DF(HighPass)      (data,cutoff); });
C R(var) F0(LowPass)       A((cvars data,int cutoff))                      D({ return DF0(LowPass)      (data,cutoff); });
C R(var) F1(LowPass)       A((cvars data,var val,int period))              D({ return DF1(LowPass)      (data,val,period); });
C R(var) F(BandPass)       A((cvars data,int period,var delta))            D({ return DF(BandPass)      (data,period,delta); });
C R(var) F0(Spectrum)      A((cvars data,int timePeriod,int samplePeriod)) D({ return DF0(Spectrum)     (data,timePeriod,samplePeriod); });
C R(var) F1(Spectrum)      A((cvars data,int timePeriod))                  D({ return DF1(Spectrum)     (data,timePeriod); });

// TA-LIB
C R(var) F(ADX)         A((int timePeriod))                                             D({ return DF(ADX)        (timePeriod); });
C R(var) F(ADXR)        A((int timePeriod))                                             D({ return DF(ADXR)       (timePeriod); });
C R(var) F(Amplitude)   A((cvars data,int timePeriod))                                  D({ return DF(Amplitude)  (data,timePeriod); });
C R(var) F(APO)         A((cvars data,int fastPeriod,int slowPeriod,int MAType))        D({ return DF(APO)        (data,fastPeriod,slowPeriod,MAType); });
C R(var) F(Aroon)       A((int timePeriod))                                             D({ return DF(Aroon)      (timePeriod); });
C R(var) F(AroonOsc)    A((int timePeriod))                                             D({ return DF(AroonOsc)   (timePeriod); });
C R(var) F0(ATR)        A((int timePeriod))                                             D({ return DF0(ATR)       (timePeriod); });
C R(var) F1(ATR)        A((cvars open,cvars high,cvars low,cvars close,int timePeriod)) D({ return DF1(ATR)       (open,high,low,close,timePeriod); });
C R(var) F(AvgPrice)    A(())                                                           D({ return DF(AvgPrice)   (); });
C R(var) F(BBands)      A((cvars data,int timePeriod,var nbDevUp,var nbDevDn,int MAType)) D({ return DF(BBands)  (data,timePeriod,nbDevUp,nbDevDn,MAType); });
C R(var) F(Beta)        A((cvars data,cvars data2,int timePeriod))                      D({ return DF(Beta)       (data,data2,timePeriod); });
C R(var) F(BOP)         A(())                                                           D({ return DF(BOP)        (); });
C R(var) F(CCI)         A((int timePeriod))                                             D({ return DF(CCI)        (timePeriod); });
C R(var) F(CMO)         A((cvars data,int timePeriod))                                  D({ return DF(CMO)        (data,timePeriod); });
C R(var) F(Correlation) A((cvars data,cvars data2,int timePeriod))                      D({ return DF(Correlation)(data,data2,timePeriod); });
C R(var) F(Covariance)  A((cvars data,cvars data2,int timePeriod))                      D({ return DF(Covariance) (data,data2,timePeriod); });
C R(var) F(DEMA)        A((cvars data,int timePeriod))                                  D({ return DF(DEMA)       (data,timePeriod); });
C R(var) F(DX)          A((int timePeriod))                                             D({ return DF(DX)         (timePeriod); });
C R(var) F0(EMA)        A((cvars data,int timePeriod))                                  D({ return DF0(EMA)       (data,timePeriod); });
C R(var) F1(EMA)        A((cvars data,var alpha))                                       D({ return DF1(EMA)       (data,alpha); });
C R(var) F(HTDcPeriod)  A((cvars data))                                                 D({ return DF(HTDcPeriod) (data); });
C R(var) F(HTDcPhase)   A((cvars data))                                                 D({ return DF(HTDcPhase)  (data); });
C R(var) F(HTPhasor)    A((cvars data))                                                 D({ return DF(HTPhasor)   (data); });
C R(var) F(HTSine)      A((cvars data))                                                 D({ return DF(HTSine)     (data); });
C R(var) F(HTTrendline) A((cvars data))                                                 D({ return DF(HTTrendline)(data); });
C R(int) F(HTTrendMode) A((cvars data))                                                 D({ return DF(HTTrendMode)(data); });
C R(var) F(KAMA)        A((cvars data,int timePeriod))                                  D({ return DF(KAMA)       (data,timePeriod); });
C R(var) F(LinearReg)   A((cvars data,int timePeriod))                                  D({ return DF(LinearReg)(data,timePeriod); });
C R(var) F(LinearRegAngle) A((cvars data,int timePeriod))                               D({ return DF(LinearRegAngle)(data,timePeriod); });
C R(var) F(LinearRegIntercept) A((cvars data,int timePeriod))                           D({ return DF(LinearRegIntercept)(data,timePeriod); });
C R(var) F(LinearRegSlope) A((cvars data,int timePeriod))                               D({ return DF(LinearRegSlope)(data,timePeriod); });
C R(var) F(MovingAverage) A((cvars data,int timePeriod,int MAType))                     D({ return DF(MovingAverage)(data,timePeriod,MAType); });
C R(var) F(MACD)        A((cvars data,int fastPeriod,int slowPeriod,int signalPeriod))  D({ return DF(MACD)       (data,fastPeriod,slowPeriod,signalPeriod); });
C R(var) F(MACDExt)     A((cvars data,int fastPeriod,int fastMAType,int slowPeriod,int slowMAType,int signalPeriod,int signalMAType))
                                                                                        D({ return DF(MACDExt)    (data,fastPeriod,fastMAType,slowPeriod,slowMAType,signalPeriod,signalMAType); });
C R(var) F(MACDFix)     A((cvars data,int signalPeriod))                                D({ return DF(MACDFix)    (data,signalPeriod); });
C R(var) F(MAMA)        A((cvars data,var fastLimit,var slowLimit))                     D({ return DF(MAMA)       (data,fastLimit,slowLimit); });
C R(var) F(MovingAverageVariablePeriod) A((cvars data,cvars data2,int minPeriod,int maxPeriod,int MAType))
                                                                                        D({ return DF(MovingAverageVariablePeriod)(data,data2,minPeriod,maxPeriod,MAType); });
C R(var) F(MaxVal)      A((cvars data,int timePeriod))                                  D({ return DF(MaxVal)     (data,timePeriod); });
C R(int) F(MaxIndex)    A((cvars data,int timePeriod))                                  D({ return DF(MaxIndex)   (data,timePeriod); });
C R(var) F(MedPrice)    A(())                                                           D({ return DF(MedPrice)   (); });
C R(var) F(MidPoint)    A((cvars data,int timePeriod))                                  D({ return DF(MidPoint)   (data,timePeriod); });
C R(var) F(MidPrice)    A((int timePeriod))                                             D({ return DF(MidPrice)   (timePeriod); });
C R(var) F(MinVal)      A((cvars data,int timePeriod))                                  D({ return DF(MinVal)     (data,timePeriod); });
C R(int) F(MinIndex)    A((cvars data,int timePeriod))                                  D({ return DF(MinIndex)   (data,timePeriod); });
C R(var) F(MinMax)      A((cvars data,int timePeriod))                                  D({ return DF(MinMax)     (data,timePeriod); });
C R(int) F(MinMaxIndex) A((cvars data,int timePeriod))                                  D({ return DF(MinMaxIndex)(data,timePeriod); });
C R(var) F0(MinusDI)    A((int timePeriod))                                             D({ return DF0(MinusDI)   (timePeriod); });
C R(var) F1(MinusDI)    A((cvars open,cvars high,cvars low,cvars close,int timePeriod)) D({ return DF1(MinusDI)   (open,high,low,close,timePeriod); });
C R(var) F0(MinusDM)    A((int timePeriod))                                             D({ return DF0(MinusDM)   (timePeriod); });
C R(var) F1(MinusDM)    A((cvars open,cvars high,cvars low,cvars close,int timePeriod)) D({ return DF1(MinusDM)   (open,high,low,close,timePeriod); });
C R(var) F(Mom)         A((cvars data,int timePeriod))                                  D({ return DF(Mom)        (data,timePeriod); });
C R(var) F(NATR)        A((int timePeriod))                                             D({ return DF(NATR)       (timePeriod); });
C R(var) F0(PlusDI)     A((int timePeriod))                                             D({ return DF0(PlusDI)    (timePeriod); });
C R(var) F1(PlusDI)     A((cvars open,cvars high,cvars low,cvars close,int timePeriod)) D({ return DF1(PlusDI)    (open,high,low,close,timePeriod); });
C R(var) F0(PlusDM)     A((int timePeriod))                                             D({ return DF0(PlusDM)    (timePeriod); });
C R(var) F1(PlusDM)     A((cvars open,cvars high,cvars low,cvars close,int timePeriod)) D({ return DF1(PlusDM)    (open,high,low,close,timePeriod); });
C R(var) F(PPO)         A((cvars data,int fastPeriod,int slowPeriod,int MAType))        D({ return DF(PPO)        (data,fastPeriod,slowPeriod,MAType); });
C R(var) F(ROC)         A((cvars data,int timePeriod))                                  D({ return DF(ROC)        (data,timePeriod); });
C R(var) F(ROCP)        A((cvars data,int timePeriod))                                  D({ return DF(ROCP)       (data,timePeriod); });
C R(var) F(ROCR)        A((cvars data,int timePeriod))                                  D({ return DF(ROCR)       (data,timePeriod); });
C R(var) F(ROCL)        A((cvars data,int timePeriod))                                  D({ return DF(ROCL)       (data,timePeriod); });
C R(var) F(ROCR100)     A((cvars data,int timePeriod))                                  D({ return DF(ROCR100)    (data,timePeriod); });
C R(var) F(RSI)         A((cvars data,int timePeriod))                                  D({ return DF(RSI)        (data,timePeriod); });
C R(var) F(SMA)         A((cvars data,int timePeriod))                                  D({ return DF(SMA)        (data,timePeriod); });
C R(var) F(StdDev)      A((cvars data,int timePeriod))                                  D({ return DF(StdDev)     (data,timePeriod); });
C R(var) F0(Stoch)      A((int fastK_Period,int slowK_Period,int slowK_MAType,int slowD_Period,int slowD_MAType)) 
                                                                                        D({ return DF0(Stoch)     (fastK_Period,slowK_Period,slowK_MAType,slowD_Period,slowD_MAType); });
C R(var) F1(Stoch)      A((cvars open,cvars high,cvars low,cvars close,int fastK_Period,int slowK_Period,int slowK_MAType,int slowD_Period,int slowD_MAType))
                                                                                        D({ return DF1(Stoch)     (open,high,low,close,fastK_Period,slowK_Period,slowK_MAType,slowD_Period,slowD_MAType); });
C R(var) F(StochF)      A((int fastK_Period,int fastD_Period,int fastD_MAType))         D({ return DF(StochF)     (fastK_Period,fastD_Period,fastD_MAType); });
C R(var) F(StochRSI)    A((cvars data,int timePeriod,int fastK_Period,int fastD_Period,int fastD_MAType))
                                                                                        D({ return DF(StochRSI)   (data,timePeriod,fastK_Period,fastD_Period,fastD_MAType); });
C R(var) F(Sum)         A((cvars data,int timePeriod))                                  D({ return DF(Sum)        (data,timePeriod); });
C R(var) F(T3)          A((cvars data,int timePeriod,var vFactor))                      D({ return DF(T3)         (data,timePeriod,vFactor); });
C R(var) F(TEMA)        A((cvars data,int timePeriod))                                  D({ return DF(TEMA)       (data,timePeriod); });
C R(var) F(TrueRange)   A(())                                                           D({ return DF(TrueRange)  (); });
C R(var) F(Trima)       A((cvars data,int timePeriod))                                  D({ return DF(Trima)      (data,timePeriod); });
C R(var) F(Trix)        A((cvars data,int timePeriod))                                  D({ return DF(Trix)       (data,timePeriod); });
C R(var) F(TSF)         A((cvars data,int timePeriod))                                  D({ return DF(TSF)        (data,timePeriod); });
C R(var) F(TypPrice)    A(())                                                           D({ return DF(TypPrice)   (); });
C R(var) F(UltOsc)      A((int timePeriod1,int timePeriod2,int timePeriod3))            D({ return DF(UltOsc)     (timePeriod1,timePeriod2,timePeriod3); });
C R(var) F(Variance)    A((cvars data,int timePeriod))                                  D({ return DF(Variance)   (data,timePeriod); });
C R(var) F(WCLPrice)    A(())                                                           D({ return DF(WCLPrice)   (); });
C R(var) F(WillR)       A((int timePeriod))                                             D({ return DF(WillR)      (timePeriod); });
C R(var) F(WMA)         A((cvars data,int timePeriod))                                  D({ return DF(WMA)        (data,timePeriod); });

// TA_LIB CDL
C R(int) F(CDL2Crows)           A(())                D({ return DF(CDL2Crows)          (); });
C R(int) F(CDL3BlackCrows)      A(())                D({ return DF(CDL3BlackCrows)     (); });
C R(int) F(CDL3Inside)          A(())                D({ return DF(CDL3Inside)         (); });
C R(int) F(CDL3LineStrike)      A(())                D({ return DF(CDL3LineStrike)     (); });
C R(int) F(CDL3Outside)         A(())                D({ return DF(CDL3Outside)        (); });
C R(int) F(CDL3StarsInSouth)    A(())                D({ return DF(CDL3StarsInSouth)   (); });
C R(int) F(CDL3WhiteSoldiers)   A(())                D({ return DF(CDL3WhiteSoldiers)  (); });
C R(int) F(CDLAbandonedBaby)    A((var penetration)) D({ return DF(CDLAbandonedBaby)   (penetration); });
C R(int) F(CDLAdvanceBlock)     A(())                D({ return DF(CDLAdvanceBlock)    (); });
C R(int) F(CDLBeltHold)         A(())                D({ return DF(CDLBeltHold)        (); });
C R(int) F(CDLBreakaway)        A(())                D({ return DF(CDLBreakaway)       (); });
C R(int) F(CDLClosingMarubozu)  A(())                D({ return DF(CDLClosingMarubozu) (); });
C R(int) F(CDLConcealBabysWall) A(())                D({ return DF(CDLConcealBabysWall)(); });
C R(int) F(CDLCounterAttack)    A(())                D({ return DF(CDLCounterAttack)   (); });
C R(int) F(CDLDarkCloudCover)   A((var penetration)) D({ return DF(CDLDarkCloudCover)  (penetration); });
C R(int) F(CDLDoji)             A(())                D({ return DF(CDLDoji)            (); });
C R(int) F(CDLDojiStar)         A(())                D({ return DF(CDLDojiStar)        (); });
C R(int) F(CDLDragonflyDoji)    A(())                D({ return DF(CDLDragonflyDoji)   (); });
C R(int) F(CDLEngulfing)        A(())                D({ return DF(CDLEngulfing)       (); });
C R(int) F(CDLEveningDojiStar)  A((var penetration)) D({ return DF(CDLEveningDojiStar) (penetration); });
C R(int) F(CDLEveningStar)      A((var penetration)) D({ return DF(CDLEveningStar)     (penetration); });
C R(int) F(CDLGapSideSideWhite) A(())                D({ return DF(CDLGapSideSideWhite)(); });
C R(int) F(CDLGravestoneDoji)   A(())                D({ return DF(CDLGravestoneDoji)  (); });
C R(int) F(CDLHammer)           A(())                D({ return DF(CDLHammer)          (); });
C R(int) F(CDLHangingMan)       A(())                D({ return DF(CDLHangingMan)      (); });
C R(int) F(CDLHarami)           A(())                D({ return DF(CDLHarami)          (); });
C R(int) F(CDLHaramiCross)      A(())                D({ return DF(CDLHaramiCross)     (); });
C R(int) F(CDLHignWave)         A(())                D({ return DF(CDLHignWave)        (); });
C R(int) F(CDLHikkake)          A(())                D({ return DF(CDLHikkake)         (); });
C R(int) F(CDLHikkakeMod)       A(())                D({ return DF(CDLHikkakeMod)      (); });
C R(int) F(CDLHomingPigeon)     A(())                D({ return DF(CDLHomingPigeon)    (); });
C R(int) F(CDLIdentical3Crows)  A(())                D({ return DF(CDLIdentical3Crows) (); });
C R(int) F(CDLInNeck)           A(())                D({ return DF(CDLInNeck)          (); });
C R(int) F(CDLInvertedHammer)   A(())                D({ return DF(CDLInvertedHammer)  (); });
C R(int) F(CDLKicking)          A(())                D({ return DF(CDLKicking)         (); });
C R(int) F(CDLKickingByLength)  A(())                D({ return DF(CDLKickingByLength) (); });
C R(int) F(CDLLadderBottom)     A(())                D({ return DF(CDLLadderBottom)    (); });
C R(int) F(CDLLongLeggedDoji)   A(())                D({ return DF(CDLLongLeggedDoji)  (); });
C R(int) F(CDLLongLine)         A(())                D({ return DF(CDLLongLine)        (); });
C R(int) F(CDLMarubozu)         A(())                D({ return DF(CDLMarubozu)        (); });
C R(int) F(CDLMatchingLow)      A(())                D({ return DF(CDLMatchingLow)     (); });
C R(int) F(CDLMatHold)          A((var penetration)) D({ return DF(CDLMatHold)         (penetration); });
C R(int) F(CDLMorningDojiStar)  A((var penetration)) D({ return DF(CDLMorningDojiStar) (penetration); });
C R(int) F(CDLMorningStar)      A((var penetration)) D({ return DF(CDLMorningStar)     (penetration); });
C R(int) F(CDLOnNeck)           A(())                D({ return DF(CDLOnNeck)          (); });
C R(int) F(CDLPiercing)         A(())                D({ return DF(CDLPiercing)        (); });
C R(int) F(CDLRickshawMan)      A(())                D({ return DF(CDLRickshawMan)     (); });
C R(int) F(CDLRiseFall3Methods) A(())                D({ return DF(CDLRiseFall3Methods)(); });
C R(int) F(CDLSeperatingLines)  A(())                D({ return DF(CDLSeperatingLines) (); });
C R(int) F(CDLShootingStar)     A(())                D({ return DF(CDLShootingStar)    (); });
C R(int) F(CDLShortLine)        A(())                D({ return DF(CDLShortLine)       (); });
C R(int) F(CDLSpinningTop)      A(())                D({ return DF(CDLSpinningTop)     (); });
C R(int) F(CDLStalledPattern)   A(())                D({ return DF(CDLStalledPattern)  (); });
C R(int) F(CDLStickSandwhich)   A(())                D({ return DF(CDLStickSandwhich)  (); });
C R(int) F(CDLTakuri)           A(())                D({ return DF(CDLTakuri)          (); });
C R(int) F(CDLTasukiGap)        A(())                D({ return DF(CDLTasukiGap)       (); });
C R(int) F(CDLThrusting)        A(())                D({ return DF(CDLThrusting)       (); });
C R(int) F(CDLTristar)          A(())                D({ return DF(CDLTristar)         (); });
C R(int) F(CDLUnique3River)     A(())                D({ return DF(CDLUnique3River)    (); });
C R(int) F(CDLUpsideGap2Crows)  A(())                D({ return DF(CDLUpsideGap2Crows) (); });
C R(int) F(CDLXSideGap3Methods) A(())                D({ return DF(CDLXSideGap3Methods)(); });

// indicators.c
C R(var) F(AC)               A((cvars data))                                                   D({ return DF(AC)              (data); });
C R(var) F(ADO)              A(())                                                             D({ return DF(ADO)             (); });
C R(var) F0(AGC)             A((cvars data,var alpha))                                         D({ return DF0(AGC)            (data,alpha); });
C R(var) F1(AGC)             A((cvars data,int period))                                        D({ return DF1(AGC)            (data,period); });
C R(var) F0(ALMA)            A((cvars data,int timePeriod,int sigma,var offset))               D({ return DF0(ALMA)           (data,timePeriod,sigma,offset); });
C R(var) F1(ALMA)            A((cvars data,int timePeriod))                                    D({ return DF1(ALMA)           (data,timePeriod); });
C R(var) F(AO)               A((cvars data))                                                   D({ return DF(AO)              (data); });
C R(var) F(ATRS)             A((int period))                                                   D({ return DF(ATRS)            (period); });
C R(var) F(Alligator)        A((cvars data))                                                   D({ return DF(Alligator)       (data); });
C R(var) F(BBOsc)            A((cvars data,int period,var nbDev,int MAType))                   D({ return DF(BBOsc)           (data,period,nbDev,MAType); });
C R(var) F(Butterworth)      A((cvars data,int cutoff))                                        D({ return DF(Butterworth)     (data,cutoff); });
C R(var) F(CGOsc)            A((cvars data,int period))                                        D({ return DF(CGOsc)           (data,period); });
C R(var) F(CI)               A((int timePeriod))                                               D({ return DF(CI)              (timePeriod); });
C R(var) F(ChandelierLong)   A((int timePeriod,var multipl))                                   D({ return DF(ChandelierLong)  (timePeriod,multipl); });
C R(var) F(ChandelierShort)  A((int timePeriod,var multipl))                                   D({ return DF(ChandelierShort) (timePeriod,multipl); });
C R(var) F(Chikou)           A((int shift))                                                    D({ return DF(Chikou)          (shift); });
C R(var) F(Coral)            A((cvars data))                                                   D({ return DF(Coral)           (data); });
C R(var) F(DCOsc)            A((cvars data,int period))                                        D({ return DF(DCOsc)           (data,period); });
C R(var) F(DChannel)         A((int period))                                                   D({ return DF(DChannel)        (period); });
C R(var) F(DPO)              A((cvars data,int timePeriod))                                    D({ return DF(DPO)             (data,timePeriod); });
C R(var) F(Decycle)          A((cvars data,int period))                                        D({ return DF(Decycle)         (data,period); });
C R(var) F(FIR3)             A((cvars data))                                                   D({ return DF(FIR3)            (data); });
C R(var) F(FIR4)             A((cvars data))                                                   D({ return DF(FIR4)            (data); });
C R(var) F(FIR6)             A((cvars data))                                                   D({ return DF(FIR6)            (data); });
C R(var) F(Fisher)           A((cvars data))                                                   D({ return DF(Fisher)          (data); });
C R(var) F(FisherInv)        A((cvars data))                                                   D({ return DF(FisherInv)       (data); });
C R(var) F(FisherN)          A((cvars data,int period))                                        D({ return DF(FisherN)         (data,period); });
C R(var) F(FractalDimension) A((cvars data,int period))                                        D({ return DF(FractalDimension)(data,period); });
C R(var) F(FractalHigh)      A((cvars data,int period))                                        D({ return DF(FractalHigh)     (data,period); });
C R(var) F(FractalLow)       A((cvars data,int period))                                        D({ return DF(FractalLow)      (data,period); });
C R(var) F(HAClose)          A(())                                                             D({ return DF(HAClose)         (); });
C R(var) F(HAHigh)           A(())                                                             D({ return DF(HAHigh)          (); });
C R(var) F(HALow)            A(())                                                             D({ return DF(HALow)           (); });
C R(var) F(HAOpen)           A(())                                                             D({ return DF(HAOpen)          (); });
C R(var) F(HH)               A((int period,int offset))                                        D({ return DF(HH)              (period,offset); });
C R(var) F(HMA)              A((cvars data,int period))                                        D({ return DF(HMA)             (data,period); });
C R(var) F(HighPass2)        A((cvars data,int cutoffPeriod))                                  D({ return DF(HighPass2)       (data,cutoffPeriod); }); 
C R(var) F(Hurst)            A((cvars data,int period))                                        D({ return DF(Hurst)           (data,period); });
C R(var) F(IBS)              A(())                                                             D({ return DF(IBS)             (); });
C R(var) F(Ichimoku)         A((int periodTenkan,int periodKijun,int periodSenkou,int offset)) D({ return DF(Ichimoku)        (periodTenkan,periodKijun,periodSenkou,offset); });
C R(var) F(Keltner)          A((cvars data,int timePeriod,var factor))                         D({ return DF(Keltner)         (data,timePeriod,factor); });
C R(var) F(LL)               A((int period,int offset))                                        D({ return DF(LL)              (period,offset); }); 
C R(var) F(Laguerre)         A((cvars data,var alpha))                                         D({ return DF(Laguerre)        (data,alpha); });
C R(var) F(MMI)              A((cvars data,int timePeriod))                                    D({ return DF(MMI)             (data,timePeriod); });
C R(var) F(Moment)           A((cvars data,int period,int n))                                  D({ return DF(Moment)          (data,period,n); });
C R(var) F(Normalize)        A((cvars data,int period))                                        D({ return DF(Normalize)       (data,period); });
C R(int) F(NumInRange)       A((cvars low,cvars high,var vMin,var vMax,int period))            D({ return DF(NumInRange)      (low,high,vMin,vMax,period); });
C R(int) F(NumRiseFall)      A((cvars data,int period))                                        D({ return DF(NumRiseFall)     (data,period); });
C R(int) F(NumWhiteBlack)    A((var vBody,int offset,int period))                              D({ return DF(NumWhiteBlack)   (vBody,offset,period); });
C R(var) F(ProfitFactor)     A((cvars data,int length))                                        D({ return DF(ProfitFactor)    (data,length); });
C R(var) F(RVI)              A((int period))                                                   D({ return DF(RVI)             (period); });
C R(var) F(Roof)             A((cvars data,int cutOffLow,int cutOffHigh))                      D({ return DF(Roof)            (data,cutOffLow,cutOffHigh); });
C R(var) F(SAR)              A((var AFstep,var AFmin,var AFmax))                               D({ return DF(SAR)             (AFstep,AFmin,AFmax); });
C R(var) F(SIROC)            A((cvars data,int timePeriod,int EMAPeriod))                      D({ return DF(SIROC)           (data,timePeriod,EMAPeriod); }); 
C R(var) F(SMom)             A((cvars data,int period,int cutoff))                             D({ return DF(SMom)            (data,period,cutoff); });
C R(var) F(ShannonEntropy)   A((cvars data,int length,int patternSize))                        D({ return DF(ShannonEntropy)  (data,length,patternSize); });
C R(var) F(ShannonGain)      A((cvars data,int period))                                        D({ return DF(ShannonGain)     (data,period); });
C R(var) F(Smooth)           A((cvars data,int cutoff))                                        D({ return DF(Smooth)          (data,cutoff); });
C R(var) F(Spearman)         A((cvars data,int period))                                        D({ return DF(Spearman)        (data,period); });
C R(var) F(StochEhlers)      A((cvars data,int timePeriod,int cutOffLow,int cutOffHigh))       D({ return DF(StochEhlers)     (data,timePeriod,cutOffLow,cutOffHigh); });
C R(var) F(TSI)              A((cvars data,int period))                                        D({ return DF(TSI)             (data,period); });
C R(var) F(UO)               A((cvars data,int cutoff))                                        D({ return DF(UO)              (data,cutoff); });
C R(var) F(Volatility)       A((cvars data,int period))                                        D({ return DF(Volatility)      (data,period); });
C R(var) F(VolatilityC)      A((int timePeriod,int EMAPeriod))                                 D({ return DF(VolatilityC)     (timePeriod,EMAPeriod); });
C R(var) F(VolatilityMM)     A((cvars data,int timePeriod,int EMAPeriod))                      D({ return DF(VolatilityMM)    (data,timePeriod,EMAPeriod); });
C R(var) F(ZMA)              A((cvars data,int period))                                        D({ return DF(ZMA)             (data,period); });
C R(var) F(ZigZag)           A((cvars data,var depth,int length,zcolor color))                 D({ return DF(ZigZag)          (data,depth,length,color); });

C R(var)    F(ccyStrength) A((string currency))                                  D({ return DF(ccyStrength)(currency); });
C R(void)   F(ccySet)      A((var strength))                                     D({        DF(ccySet)     (strength); });
C R(void)   F(ccyReset)    A(())                                                 D({        DF(ccyReset)   (); });
C R(string) F(ccyMin)      A(())                                                 D({ return DF(ccyMin)     (); });
C R(string) F(ccyMax)      A(())                                                 D({ return DF(ccyMax)     (); });
C R(var)    F(dayClose)    A((int zone,int day))                                 D({ return DF(dayClose)   (zone,day); });
C R(var)    F(dayHigh)     A((int zone,int day))                                 D({ return DF(dayHigh)    (zone,day); });
C R(var)    F(dayLow)      A((int zone,int day))                                 D({ return DF(dayLow)     (zone,day); });
C R(var)    F(dayOpen)     A((int zone,int day))                                 D({ return DF(dayOpen)    (zone,day); });
C R(var)    F(dayPivot)    A((int zone,int day))                                 D({ return DF(dayPivot)   (zone,day); });
C R(var)    F(genNoise)    A(())                                                 D({ return DF(genNoise)   (); });
C R(var)    F(genSine)     A((var period1,var period2))                          D({ return DF(genSine)    (period1,period2); });
C R(var)    F(genSquare)   A((var period1,var period2))                          D({ return DF(genSquare)  (period1,period2); });
C R(var)    F(move)        A((cvars data,int length,int movePeriod,var percent)) D({ return DF(move)       (data,length,movePeriod,percent); });
C R(var)    F(season)      A((cvars data,int timePeriod,int horizon,int mode))   D({ return DF(season)     (data,timePeriod,horizon,mode); });

C R(int)    F(stridx)      A((string name))                                                D({ return DF(stridx)    (name); });
C R(string) F(strxid)      A((int index))                                                  D({ return DF(strxid)    (index); });
C R(int)    F1(dataParse)  A((int handle,string format,string fileName,int start,int num)) D({ return DF1(dataParse)(handle,format,fileName,start,num); });
C R(int)    F2(dataParse)  A((int handle,string format,string fileName,string filter))     D({ return DF2(dataParse)(handle,format,fileName,filter); });

// TODO something might be wrong with 'dataParse' setup
// Manual shows 2 functions, but this setup has 3
// http://zorro-project.com/manual/en/data.htm

#undef F
#undef F0
#undef F1
#undef F2
#undef F3
#undef C
#undef R
#undef A
#undef D
#undef DF
#undef DF0
#undef DF1
#undef DF2
#undef DF3
#undef I
#undef VA
