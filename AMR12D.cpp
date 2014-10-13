

<html><head><meta http-equiv='Content-Type' content='text/html; charset=iso-8859-2'><title>SPOJ submission 12534028 (C++ 4.3.2)</title><style type='text/css'><!--/* GeSHi (c) Nigel McNie 2004 (http://qbnz.com/highlighter) */
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
--></style></head><body><pre class="cpp"><div class="head">SPOJ submission 12534028 (C++ 4.3.2) <a href='/files/src/save/12534028'>plaintext</a> <a href='/status/AMR12D,samprit/'>list</a>. Status: AC, problem AMR12D, contest SPOJ. By samprit (Samprit Biswas), 2014-10-03 18:23:25.</div><ol><li><div class="de1"><span class="co2">#include &lt;iostream&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;cstdio&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;string&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;queue&gt;</span></div></li><li class="li2"><div class="de2"><span class="co2">#include &lt;stack&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;algorithm&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;cmath&gt;</span></div></li><li><div class="de1"><span class="co2">#include &lt;map&gt;</span></div></li><li><div class="de1">&nbsp;</div></li><li class="li2"><div class="de2"><span class="co2">#define ll long long</span></div></li><li><div class="de1"><span class="co2">#define ull unsigned long long</span></div></li><li><div class="de1">&nbsp;</div></li><li><div class="de1"><span class="kw2">using</span> <span class="kw2">namespace</span> std;</div></li><li><div class="de1">&nbsp;</div></li><li class="li2"><div class="de2">std::<span class="me2">string</span> reverse<span class="br0">&#40;</span>std::<span class="me2">string</span> <span class="kw4">const</span> &amp;input<span class="br0">&#41;</span> <span class="br0">&#123;</span> </div></li><li><div class="de1">    <span class="kw1">return</span> std::<span class="me2">string</span><span class="br0">&#40;</span>input.<span class="me1">rbegin</span><span class="br0">&#40;</span><span class="br0">&#41;</span>, input.<span class="me1">rend</span><span class="br0">&#40;</span><span class="br0">&#41;</span><span class="br0">&#41;</span>;</div></li><li><div class="de1"><span class="br0">&#125;</span></div></li><li><div class="de1">&nbsp;</div></li><li><div class="de1"><span class="kw4">int</span> main<span class="br0">&#40;</span><span class="br0">&#41;</span></div></li><li class="li2"><div class="de2"><span class="br0">&#123;</span></div></li><li><div class="de1">    <span class="kw4">int</span> T,i,j;</div></li><li><div class="de1">    cin&gt;&gt;T;</div></li><li><div class="de1">&nbsp;</div></li><li><div class="de1">    <span class="kw1">while</span><span class="br0">&#40;</span>T--<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li class="li2"><div class="de2">        string str;</div></li><li><div class="de1">        cin&gt;&gt;str;</div></li><li><div class="de1">&nbsp;</div></li><li><div class="de1">        <span class="kw4">bool</span> flag = <span class="kw2">true</span>;</div></li><li><div class="de1">        string sub, rev;</div></li><li class="li2"><div class="de2">&nbsp;</div></li><li><div class="de1">        <span class="kw1">for</span><span class="br0">&#40;</span>i=<span class="nu0">0</span>;i&lt;str.<span class="me1">size</span><span class="br0">&#40;</span><span class="br0">&#41;</span>;i++<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li><div class="de1">            <span class="kw1">for</span><span class="br0">&#40;</span>j=i;j&lt;str.<span class="me1">size</span><span class="br0">&#40;</span><span class="br0">&#41;</span>;j++<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li><div class="de1">                sub = <span class="br0">&#40;</span>str.<span class="me1">substr</span><span class="br0">&#40;</span>i,j-i+<span class="nu0">1</span><span class="br0">&#41;</span><span class="br0">&#41;</span>;</div></li><li><div class="de1">&nbsp;</div></li><li class="li2"><div class="de2">                rev = reverse<span class="br0">&#40;</span>sub<span class="br0">&#41;</span>; </div></li><li><div class="de1">&nbsp;</div></li><li><div class="de1">                <span class="kw1">if</span><span class="br0">&#40;</span>str.<span class="me1">find</span><span class="br0">&#40;</span>rev<span class="br0">&#41;</span> == string::<span class="me2">npos</span> <span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li><div class="de1">                    flag = <span class="kw2">false</span>;</div></li><li><div class="de1">                    <span class="kw2">break</span>;</div></li><li class="li2"><div class="de2">                <span class="br0">&#125;</span></div></li><li><div class="de1">            <span class="br0">&#125;</span></div></li><li><div class="de1">            <span class="kw1">if</span><span class="br0">&#40;</span>flag==<span class="kw2">false</span><span class="br0">&#41;</span> <span class="kw2">break</span>;</div></li><li><div class="de1">        <span class="br0">&#125;</span></div></li><li><div class="de1">        <span class="kw1">if</span><span class="br0">&#40;</span>flag<span class="br0">&#41;</span><span class="br0">&#123;</span></div></li><li class="li2"><div class="de2">            cout&lt;&lt;<span class="st0">"YES<span class="es0">\n</span>"</span>;</div></li><li><div class="de1">        <span class="br0">&#125;</span><span class="kw1">else</span><span class="br0">&#123;</span></div></li><li><div class="de1">            cout&lt;&lt;<span class="st0">"NO<span class="es0">\n</span>"</span>;</div></li><li><div class="de1">        <span class="br0">&#125;</span></div></li><li><div class="de1">    <span class="br0">&#125;</span></div></li><li class="li2"><div class="de2">&nbsp;</div></li><li><div class="de1">    <span class="kw1">return</span> <span class="nu0">0</span>;</div></li><li><div class="de1"><span class="br0">&#125;</span> </div></li></ol></pre></body></html>