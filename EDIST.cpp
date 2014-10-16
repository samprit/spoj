

<html><head><meta http-equiv='Content-Type' content='text/html; charset=iso-8859-2'><title>SPOJ submission 12632802 (C++ 4.3.2)</title><style type='text/css'><!--/* GeSHi (c) Nigel McNie 2004 (http://qbnz.com/highlighter) */
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
--></style></head><body><pre class="cpp"><div class="head">SPOJ submission 12632802 (C++ 4.3.2) <a href='/files/src/save/12632802'>plaintext</a> <a href='/status/EDIST,samprit/'>list</a>. Status: AC, problem EDIST, contest SPOJ. By samprit (Samprit Biswas), 2014-10-15 14:37:40.</div><ol><li><div class="de1"><span class="co1">//Includes</span></div></li><li><div class="de1"><span class="co2">#include &lt;vector&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;queue&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;map&gt;</span></div></li><li class="li2"><div class="de2"><span class="co2">#include &lt;set&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;utility&gt; //Pair</span></div></li><li><div class="de1"><span class="co2">#include &lt;algorithm&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;sstream&gt; // istringstream&gt;&gt; ostring stream&lt;&lt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;iostream&gt;</span></div></li><li class="li2"><div class="de2"><span class="co2">#include &lt;iomanip&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;cstdio&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;cmath&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;cstdlib&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;cassert&gt;</span></div></li><li class="li2"><div class="de2"><span class="co2">#include &lt;ctime&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;cstring&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;limits&gt;</span></div></li><li><div class="de1"><span class="kw2">using</span> <span class="kw2">namespace</span> std;</div></li><li> </li><li class="li2"><div class="de2"><span class="co1">//M lazy ;)</span></div></li><li><div class="de1"><span class="co2">#define ll long long</span></div></li><li><div class="de1"><span class="kw4">typedef</span> istringstream iss;</div></li><li><div class="de1"><span class="kw4">typedef</span> ostringstream oss;</div></li><li><div class="de1">&nbsp;</div></li><li class="li2"><div class="de2"><span class="co2">#define ESP (1e-9)</span></div></li><li><div class="de1"><span class="co2">#define imax numeric_limits&lt;int&gt;::max()</span></div></li><li><div class="de1"><span class="co2">#define imin numeric_limits&lt;int&gt;::min()</span></div></li><li><div class="de1"><span class="co2">#define lmax numeric_limits&lt;ll&gt;::max()</span></div></li><li><div class="de1"><span class="co2">#define lmin numeric_limits&lt;ll&gt;::min()</span></div></li><li class="li2"> </li><li><div class="de1"><span class="kw4">void</span> assertOO<span class="br0">&#40;</span><span class="kw4">int</span> a, <span class="kw4">int</span> n, <span class="kw4">int</span> b<span class="br0">&#41;</span> <span class="br0">&#123;</span></div></li><li><div class="de1">    <a href="http://www.opengroup.org/onlinepubs/009695399/functions/assert.html"><span class="kw3">assert</span></a><span class="br0">&#40;</span> a &lt;= n &amp;&amp; n &lt;= b <span class="br0">&#41;</span>;</div></li><li><div class="de1"><span class="br0">&#125;</span></div></li><li><div class="de1">&nbsp;</div></li><li class="li2"><div class="de2">&nbsp;</div></li><li><div class="de1"><span class="kw4">int</span> editDistance<span class="br0">&#40;</span>string a, string b<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li><div class="de1">    <span class="kw4">int</span> i,j,temp, lastDiag, oldDiag;</div></li><li><div class="de1">    <span class="kw4">int</span> dist<span class="br0">&#91;</span>b.<span class="me1">size</span><span class="br0">&#40;</span><span class="br0">&#41;</span>+<span class="nu0">1</span><span class="br0">&#93;</span>;</div></li><li><div class="de1">&nbsp;</div></li><li class="li2"><div class="de2">    <span class="kw1">for</span><span class="br0">&#40;</span>i=<span class="nu0">0</span>;i&lt;=b.<span class="me1">size</span><span class="br0">&#40;</span><span class="br0">&#41;</span>;i++<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li><div class="de1">        dist<span class="br0">&#91;</span>i<span class="br0">&#93;</span>= i;</div></li><li><div class="de1">    <span class="br0">&#125;</span></div></li><li><div class="de1">&nbsp;</div></li><li><div class="de1">    <span class="kw1">for</span><span class="br0">&#40;</span>i=<span class="nu0">1</span>;i&lt;=a.<span class="me1">size</span><span class="br0">&#40;</span><span class="br0">&#41;</span>;i++<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li class="li2"><div class="de2">        dist<span class="br0">&#91;</span><span class="nu0">0</span><span class="br0">&#93;</span>=i;</div></li><li><div class="de1">        lastDiag = i-<span class="nu0">1</span>;</div></li><li><div class="de1">        <span class="kw1">for</span><span class="br0">&#40;</span>j=<span class="nu0">1</span>;j&lt;=b.<span class="me1">size</span><span class="br0">&#40;</span><span class="br0">&#41;</span>;j++<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li><div class="de1">            temp=<span class="nu0">1</span>;</div></li><li><div class="de1">            <span class="kw1">if</span><span class="br0">&#40;</span>a<span class="br0">&#91;</span>i-<span class="nu0">1</span><span class="br0">&#93;</span>==b<span class="br0">&#91;</span>j-<span class="nu0">1</span><span class="br0">&#93;</span><span class="br0">&#41;</span>  temp=<span class="nu0">0</span>;</div></li><li class="li2">            </li><li><div class="de1">            oldDiag = dist<span class="br0">&#91;</span>j<span class="br0">&#93;</span>;</div></li><li><div class="de1">            dist<span class="br0">&#91;</span>j<span class="br0">&#93;</span> = min<span class="br0">&#40;</span>lastDiag+temp, min<span class="br0">&#40;</span>dist<span class="br0">&#91;</span>j-<span class="nu0">1</span><span class="br0">&#93;</span>+<span class="nu0">1</span>, dist<span class="br0">&#91;</span>j<span class="br0">&#93;</span>+<span class="nu0">1</span><span class="br0">&#41;</span><span class="br0">&#41;</span>;</div></li><li><div class="de1">            lastDiag = oldDiag;</div></li><li><div class="de1">        <span class="br0">&#125;</span></div></li><li class="li2"><div class="de2">    <span class="br0">&#125;</span></div></li><li><div class="de1">&nbsp;</div></li><li><div class="de1">    <span class="kw1">return</span> dist<span class="br0">&#91;</span>b.<span class="me1">size</span><span class="br0">&#40;</span><span class="br0">&#41;</span><span class="br0">&#93;</span>;</div></li><li><div class="de1"><span class="br0">&#125;</span></div></li><li><div class="de1">&nbsp;</div></li><li class="li2"><div class="de2"><span class="kw4">int</span> main<span class="br0">&#40;</span><span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li><div class="de1">&nbsp;</div></li><li><div class="de1">    ll <span class="kw4">int</span> T;</div></li><li><div class="de1">    cin&gt;&gt;T;</div></li><li><div class="de1">&nbsp;</div></li><li class="li2"><div class="de2">    <span class="kw1">while</span><span class="br0">&#40;</span>T--<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li><div class="de1">        string a, b;</div></li><li><div class="de1">        cin&gt;&gt;a&gt;&gt;b;</div></li><li><div class="de1">        cout&lt;&lt;editDistance<span class="br0">&#40;</span>a,b<span class="br0">&#41;</span>&lt;&lt;<span class="st0">"<span class="es0">\n</span>"</span>;</div></li><li><div class="de1">    <span class="br0">&#125;</span></div></li><li class="li2">    </li><li><div class="de1">	<span class="kw1">return</span> <span class="nu0">0</span>;</div></li><li><div class="de1"><span class="br0">&#125;</span> </div></li></ol></pre></body></html>