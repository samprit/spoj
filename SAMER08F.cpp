

<html><head><meta http-equiv='Content-Type' content='text/html; charset=iso-8859-2'><title>SPOJ submission 12501813 (C++ 4.3.2)</title><style type='text/css'><!--/* GeSHi (c) Nigel McNie 2004 (http://qbnz.com/highlighter) */
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
--></style></head><body><pre class="cpp"><div class="head">SPOJ submission 12501813 (C++ 4.3.2) <a href='/files/src/save/12501813'>plaintext</a> <a href='/status/SAMER08F,samprit/'>list</a>. Status: AC, problem SAMER08F, contest SPOJ. By samprit (Samprit Biswas), 2014-09-30 15:44:02.</div><ol><li><div class="de1"><span class="co2">#include &lt;iostream&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;string&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;queue&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;stack&gt;</span></div></li><li class="li2"><div class="de2">&nbsp;</div></li><li><div class="de1"><span class="kw2">using</span> <span class="kw2">namespace</span> std;</div></li><li><div class="de1">&nbsp;</div></li><li><div class="de1"><span class="kw4">int</span> main<span class="br0">&#40;</span><span class="br0">&#41;</span></div></li><li><div class="de1"><span class="br0">&#123;</span></div></li><li class="li2"><div class="de2">	<span class="kw4">int</span> num;</div></li><li><div class="de1">	cin&gt;&gt;num;</div></li><li><div class="de1">&nbsp;</div></li><li><div class="de1">	<span class="kw1">while</span><span class="br0">&#40;</span>num!=<span class="nu0">0</span><span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li><div class="de1">		<span class="kw4">int</span> n = num;</div></li><li class="li2"><div class="de2">		cout&lt;&lt;<span class="br0">&#40;</span><span class="br0">&#40;</span>n*<span class="br0">&#40;</span>n+<span class="nu0">1</span><span class="br0">&#41;</span>*<span class="br0">&#40;</span><span class="nu0">2</span>*n+<span class="nu0">1</span><span class="br0">&#41;</span><span class="br0">&#41;</span>/<span class="nu0">6</span><span class="br0">&#41;</span>&lt;&lt;<span class="st0">"<span class="es0">\n</span>"</span>;</div></li><li><div class="de1">		cin&gt;&gt;num;</div></li><li><div class="de1">	<span class="br0">&#125;</span></div></li><li><div class="de1">    <span class="kw1">return</span> <span class="nu0">0</span>;</div></li><li><div class="de1"><span class="br0">&#125;</span> </div></li></ol></pre></body></html>