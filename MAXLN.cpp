

<html><head><meta http-equiv='Content-Type' content='text/html; charset=iso-8859-2'><title>SPOJ submission 12614356 (C++ 4.3.2)</title><style type='text/css'><!--/* GeSHi (c) Nigel McNie 2004 (http://qbnz.com/highlighter) */
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
--></style></head><body><pre class="cpp"><div class="head">SPOJ submission 12614356 (C++ 4.3.2) <a href='/files/src/save/12614356'>plaintext</a> <a href='/status/MAXLN,samprit/'>list</a>. Status: AC, problem MAXLN, contest SPOJ. By samprit (Samprit Biswas), 2014-10-13 12:23:21.</div><ol><li><div class="de1"><span class="co1">//Includes</span></div></li><li><div class="de1"><span class="co2">#include &lt;vector&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;queue&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;map&gt;</span></div></li><li class="li2"><div class="de2"><span class="co2">#include &lt;set&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;utility&gt; //Pair</span></div></li><li><div class="de1"><span class="co2">#include &lt;algorithm&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;sstream&gt; // istringstream&gt;&gt; ostring stream&lt;&lt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;iostream&gt;</span></div></li><li class="li2"><div class="de2"><span class="co2">#include &lt;iomanip&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;cstdio&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;cmath&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;cstdlib&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;cassert&gt;</span></div></li><li class="li2"><div class="de2"><span class="co2">#include &lt;ctime&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;cstring&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;limits&gt;</span></div></li><li><div class="de1"><span class="kw2">using</span> <span class="kw2">namespace</span> std;</div></li><li> </li><li class="li2"><div class="de2"><span class="co2">#define ll long long</span></div></li><li><div class="de1"><span class="kw4">typedef</span> istringstream iss;</div></li><li><div class="de1"><span class="kw4">typedef</span> ostringstream oss;</div></li><li><div class="de1">&nbsp;</div></li><li><div class="de1"><span class="co2">#define ESP (1e-9)</span></div></li><li class="li2"><div class="de2"><span class="co2">#define imax numeric_limits&lt;int&gt;::max()</span></div></li><li><div class="de1"><span class="co2">#define imin numeric_limits&lt;int&gt;::min()</span></div></li><li><div class="de1"><span class="co2">#define lmax numeric_limits&lt;ll&gt;::max()</span></div></li><li><div class="de1"><span class="co2">#define lmin numeric_limits&lt;ll&gt;::min()</span></div></li><li> </li><li class="li2"><div class="de2"><span class="kw4">void</span> assertOO<span class="br0">&#40;</span><span class="kw4">int</span> a, <span class="kw4">int</span> n, <span class="kw4">int</span> b<span class="br0">&#41;</span> <span class="br0">&#123;</span></div></li><li><div class="de1">    <a href="http://www.opengroup.org/onlinepubs/009695399/functions/assert.html"><span class="kw3">assert</span></a><span class="br0">&#40;</span> a &lt;= n &amp;&amp; n &lt;= b <span class="br0">&#41;</span>;</div></li><li><div class="de1"><span class="br0">&#125;</span></div></li><li><div class="de1">&nbsp;</div></li><li><div class="de1"><span class="kw4">int</span> main<span class="br0">&#40;</span><span class="kw4">int</span> argc, <span class="kw4">char</span> <span class="kw4">const</span> *argv<span class="br0">&#91;</span><span class="br0">&#93;</span><span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li class="li2">	</li><li><div class="de1">	ll <span class="kw4">int</span> T,N, ans;</div></li><li><div class="de1">	<a href="http://www.opengroup.org/onlinepubs/009695399/functions/scanf.html"><span class="kw3">scanf</span></a><span class="br0">&#40;</span><span class="st0">"%lld"</span>,&amp;T<span class="br0">&#41;</span>;</div></li><li><div class="de1">	ll <span class="kw4">int</span> caseNo=<span class="nu0">0</span>;</div></li><li><div class="de1">	<span class="kw1">while</span><span class="br0">&#40;</span>T--<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li class="li2"><div class="de2">		caseNo++;</div></li><li><div class="de1">		<a href="http://www.opengroup.org/onlinepubs/009695399/functions/scanf.html"><span class="kw3">scanf</span></a><span class="br0">&#40;</span><span class="st0">"%lld"</span>,&amp;N<span class="br0">&#41;</span>;</div></li><li><div class="de1">		<a href="http://www.opengroup.org/onlinepubs/009695399/functions/printf.html"><span class="kw3">printf</span></a><span class="br0">&#40;</span><span class="st0">"Case %lld: %.2f<span class="es0">\n</span>"</span>,caseNo, <span class="nu0">0</span>.<span class="nu0">25</span> + <span class="nu0">4</span>*N*N<span class="br0">&#41;</span>;</div></li><li><div class="de1">	<span class="br0">&#125;</span></div></li><li><div class="de1">&nbsp;</div></li><li class="li2"><div class="de2">	<span class="kw1">return</span> <span class="nu0">0</span>;</div></li><li><div class="de1"><span class="br0">&#125;</span> </div></li></ol></pre></body></html>