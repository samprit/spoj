

<html><head><meta http-equiv='Content-Type' content='text/html; charset=iso-8859-2'><title>SPOJ submission 12603001 (C++ 4.3.2)</title><style type='text/css'><!--/* GeSHi (c) Nigel McNie 2004 (http://qbnz.com/highlighter) */
.cpp  {color: #000066; border: 1px solid #d0d0d0; background-color: #f0f0f0;}
.cpp a:link {color: #000060;}
.cpp a:hover {background-color: #f0f000;}
.cpp .head {font-family: Verdana, Arial, sans-serif; color: #808080; font-size: 70%; font-weight: bold; background-color: #f0f0ff; border-bottom: 1px solid #d0d0d0; padding: 2px;}
.cpp .imp {font-weight: bold; color: red;}
.cpp .kw1 {color: #0000ff;}
.cpp .kw2 {color: #0000ff;}
.cpp .kw3 {color: #0000dd;}
.cpp .kw4 {color: #0000ff;}
.cpp .co1 {color: #ff0000;}
.cpp .co2 {color: #339900;}
.cpp .coMULTI {color: #ff0000; font-style: italic;}
.cpp .es0 {color: #666666; font-weight: bold;}
.cpp .br0 {color: #000000;}
.cpp .st0 {color: #666666;}
.cpp .nu0 {color: #0000dd;}
.cpp .me1 {color: #00eeff;}
.cpp .me2 {color: #00eeff;}
--></style></head><body><pre class="cpp"><div class="head">SPOJ submission 12603001 (C++ 4.3.2) <a href='/files/src/save/12603001'>plaintext</a> <a href='/status/QUADAREA,samprit/'>list</a>. Status: AC, problem QUADAREA, contest SPOJ. By samprit (Samprit Biswas), 2014-10-11 21:32:19.</div><ol><li><div class="de1"><span class="co2">#include&lt;stdio.h&gt;</span></div></li><li><div class="de1"><span class="co2">#include&lt;math.h&gt;</span></div></li><li><div class="de1"><span class="kw4">int</span> main<span class="br0">&#40;</span><span class="br0">&#41;</span></div></li><li><div class="de1"><span class="br0">&#123;</span></div></li><li class="li2"><div class="de2">    <span class="kw4">int</span> t;</div></li><li><div class="de1">    <a href="http://www.opengroup.org/onlinepubs/009695399/functions/scanf.html"><span class="kw3">scanf</span></a><span class="br0">&#40;</span><span class="st0">"%d"</span>,&amp;t<span class="br0">&#41;</span>;</div></li><li><div class="de1">    <span class="kw1">while</span><span class="br0">&#40;</span>t--<span class="br0">&#41;</span></div></li><li><div class="de1">    <span class="br0">&#123;</span></div></li><li><div class="de1">        <span class="kw4">double</span> ans,s,a,b,c,d;</div></li><li class="li2"><div class="de2">        <a href="http://www.opengroup.org/onlinepubs/009695399/functions/scanf.html"><span class="kw3">scanf</span></a><span class="br0">&#40;</span><span class="st0">"%lf%lf%lf%lf"</span>,&amp;a,&amp;b,&amp;c,&amp;d<span class="br0">&#41;</span>;</div></li><li><div class="de1">        s=<span class="br0">&#40;</span>a+b+c+d<span class="br0">&#41;</span>/<span class="nu0">2</span>.<span class="nu0">0</span>;</div></li><li><div class="de1">        ans=<span class="br0">&#40;</span>s-a<span class="br0">&#41;</span>*<span class="br0">&#40;</span>s-b<span class="br0">&#41;</span>*<span class="br0">&#40;</span>s-c<span class="br0">&#41;</span>*<span class="br0">&#40;</span>s-d<span class="br0">&#41;</span>;</div></li><li><div class="de1">        ans=<a href="http://www.opengroup.org/onlinepubs/009695399/functions/sqrt.html"><span class="kw3">sqrt</span></a><span class="br0">&#40;</span>ans<span class="br0">&#41;</span>;</div></li><li><div class="de1">        <a href="http://www.opengroup.org/onlinepubs/009695399/functions/printf.html"><span class="kw3">printf</span></a><span class="br0">&#40;</span><span class="st0">"%.2lf<span class="es0">\n</span>"</span>,ans<span class="br0">&#41;</span>;</div></li><li class="li2"><div class="de2">    <span class="br0">&#125;</span></div></li><li><div class="de1">    <span class="kw1">return</span> <span class="nu0">0</span>;</div></li><li><div class="de1"><span class="br0">&#125;</span> </div></li></ol></pre></body></html>