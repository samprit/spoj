

<html><head><meta http-equiv='Content-Type' content='text/html; charset=iso-8859-2'><title>SPOJ submission 12562990 (C++ 4.3.2)</title><style type='text/css'><!--/* GeSHi (c) Nigel McNie 2004 (http://qbnz.com/highlighter) */
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
--></style></head><body><pre class="cpp"><div class="head">SPOJ submission 12562990 (C++ 4.3.2) <a href='/files/src/save/12562990'>plaintext</a> <a href='/status/OFFSIDE,samprit/'>list</a>. Status: AC, problem OFFSIDE, contest SPOJ. By samprit (Samprit Biswas), 2014-10-07 13:47:38.</div><ol><li><div class="de1"><span class="co2">#include &lt;iostream&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;cstdio&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;string&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;queue&gt;</span></div></li><li class="li2"><div class="de2"><span class="co2">#include &lt;stack&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;algorithm&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;cmath&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;map&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;climits&gt;</span></div></li><li class="li2"><div class="de2">&nbsp;</div></li><li><div class="de1"><span class="co2">#define ll long long</span></div></li><li><div class="de1"><span class="co2">#define ull unsigned long long</span></div></li><li><div class="de1">&nbsp;</div></li><li><div class="de1"><span class="kw2">using</span> <span class="kw2">namespace</span> std;</div></li><li class="li2"><div class="de2">&nbsp;</div></li><li><div class="de1"><span class="kw4">int</span> main<span class="br0">&#40;</span><span class="br0">&#41;</span></div></li><li><div class="de1"><span class="br0">&#123;</span></div></li><li><div class="de1">    ll <span class="kw4">int</span> A,D,i;</div></li><li><div class="de1">    <a href="http://www.opengroup.org/onlinepubs/009695399/functions/scanf.html"><span class="kw3">scanf</span></a><span class="br0">&#40;</span><span class="st0">"%lld %lld"</span>,&amp;A, &amp;D<span class="br0">&#41;</span>;</div></li><li class="li2"><div class="de2">&nbsp;</div></li><li><div class="de1">    <span class="kw1">while</span><span class="br0">&#40;</span>A!=<span class="nu0">0</span> || D!=<span class="nu0">0</span><span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li><div class="de1">        ll <span class="kw4">int</span> B, C, minB=<span class="kw2">INT_MAX</span>, min1C=<span class="kw2">INT_MAX</span>, min2C=<span class="kw2">INT_MAX</span>;</div></li><li><div class="de1">        <span class="kw1">for</span><span class="br0">&#40;</span>i=<span class="nu0">0</span>;i&lt;A;i++<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li><div class="de1">            <a href="http://www.opengroup.org/onlinepubs/009695399/functions/scanf.html"><span class="kw3">scanf</span></a><span class="br0">&#40;</span><span class="st0">"%lld"</span>,&amp;B<span class="br0">&#41;</span>;</div></li><li class="li2"><div class="de2">            <span class="kw1">if</span><span class="br0">&#40;</span>minB &gt; B<span class="br0">&#41;</span> minB = B;</div></li><li><div class="de1">        <span class="br0">&#125;</span></div></li><li><div class="de1">&nbsp;</div></li><li><div class="de1">        <span class="kw1">for</span><span class="br0">&#40;</span>i=<span class="nu0">0</span>;i&lt;D;i++<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li><div class="de1">            <a href="http://www.opengroup.org/onlinepubs/009695399/functions/scanf.html"><span class="kw3">scanf</span></a><span class="br0">&#40;</span><span class="st0">"%lld"</span>,&amp;C<span class="br0">&#41;</span>; </div></li><li class="li2"><div class="de2">            <span class="kw1">if</span><span class="br0">&#40;</span>min1C &gt; C<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li><div class="de1">                min2C = min1C;</div></li><li><div class="de1">                min1C = C;</div></li><li><div class="de1">            <span class="br0">&#125;</span><span class="kw1">else</span> <span class="kw1">if</span><span class="br0">&#40;</span>min2C &gt; C<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li><div class="de1">                min2C = C;</div></li><li class="li2"><div class="de2">            <span class="br0">&#125;</span></div></li><li><div class="de1">        <span class="br0">&#125;</span></div></li><li><div class="de1">        <span class="co1">//sort(B,B+A);</span></div></li><li><div class="de1">        <span class="co1">//sort(C,C+D);</span></div></li><li><div class="de1">        <span class="kw1">if</span><span class="br0">&#40;</span>minB &lt; min2C<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li class="li2"><div class="de2">            <a href="http://www.opengroup.org/onlinepubs/009695399/functions/printf.html"><span class="kw3">printf</span></a><span class="br0">&#40;</span><span class="st0">"Y<span class="es0">\n</span>"</span><span class="br0">&#41;</span>;</div></li><li><div class="de1">        <span class="br0">&#125;</span><span class="kw1">else</span><span class="br0">&#123;</span></div></li><li><div class="de1">            <a href="http://www.opengroup.org/onlinepubs/009695399/functions/printf.html"><span class="kw3">printf</span></a><span class="br0">&#40;</span><span class="st0">"N<span class="es0">\n</span>"</span><span class="br0">&#41;</span>;</div></li><li><div class="de1">        <span class="br0">&#125;</span></div></li><li><div class="de1">        <a href="http://www.opengroup.org/onlinepubs/009695399/functions/scanf.html"><span class="kw3">scanf</span></a><span class="br0">&#40;</span><span class="st0">"%lld %lld"</span>,&amp;A, &amp;D<span class="br0">&#41;</span>;</div></li><li class="li2"><div class="de2">    <span class="br0">&#125;</span></div></li><li><div class="de1">    <span class="kw1">return</span> <span class="nu0">0</span>;</div></li><li><div class="de1"><span class="br0">&#125;</span> </div></li></ol></pre></body></html>