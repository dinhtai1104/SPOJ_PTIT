#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
long long n, m, t[100005], tMin;
long ok(long long A)
{
	long long d = 0;
	for (int  long i = 1; i <= n; i++) d += A/ t[i];
	if (d >= m) return 1;
	return 0;	
}
long long find()
{
	long long res;
	long long l = 1, r = tMin * m;
	long long mid;
	while(l <= r)
	{
		mid = (l + r) / 2;
		if (ok(mid))
		{
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	return res;
}
int main()
{
	cin >> n >> m;
	tMin = 1e9 + 1;
	for (int i = 1; i <= n; i++)
	{
		cin >> t[i];
		tMin = min(t[i], tMin);
	}
	cout << find();
	return 0;
}
/*K1q55I5SXUS5SII2S5KI52K5XI5S51UIIUqI2IXUI2215IK221I2UU52IU525I2u2UI155IU5U5UI12uUYJs1YuYYJrisri:::::::::::i:::::i:i:::i:::i:i:i:::::i:::i:i:i:i:::i:i.
2YjuJuJUjjJUuUuUu111JUuUJjs2ujYjYjjUujJjYJYuYju1LJLJYYJ1sjsuYjYJYusuYuusYjJJJjvYLY7rrrrririiiiiii:::..................................................
SuS5S2S55USIXIS2I2X52UXI5II5XIX22IUUKKS12u2UIuIU2U1UI1UU522UUI5UU2S2IU2U5I51UJujusjLv777J7rrrr777r7r77rri:::::::::::::::i:i:::i:::::i:i:::::i:i:::i:i.
I25K55IS5I2XX5U22IUI22ISSqI2ISI51U1I2I5qIUjUUSU2US1511u2UI1U122IUI1IU22IUUUI11jUJuJJJuv77L777rirr7irrrr7rrrri::::::::::::::::::::::::::::::::::::::::.
5u5I52I152SXXI5SSIKSXIXI5IKIS25IU1IU2u2IXK5us1XUU1UU5U21uuUu2uIU2uujUu21uJUjJuUJJLJvYvsvv777L77rrrririririri7rrii:::::::::::::::::::::::::::::::::::i.
IUI5U525125KIXSXXX2SSKSSSI2II525U5uU15221SSK21jI2I12UUUIUUU2122111juYYvsvL7vr77LYY7vvv77rrr7r77v777vrrrrrrrrrri777ir:::::::::::::::::::::::::::::::::.
SUS2SI5SIUSXXIXXX255KSqSXXKI5SqXX2U12U2U2122SI2U212UUu2255X1Uu1sjssvvvL777777r7r77v7Y7vvLv77rrvr777rv77rrr7rrr7rrrrr77r::::::::::::::::::::::::::::::.
I22SSS2SSX2K55ISI55K5SSS2XSK5KXPPP5Iuuj52UUUU5Iq5I1U1IUUuS2UjjsYvYvvvLvvr7777777rrr77Y7vYY777v77rv77r7r7r777r7r777r7r7vv7ri:.::::::::::::::::::::::::.
q2KI5IXI555S52S25I5II155X2X5S255SSqKX2125UII21U5XX5jU1IuUJ1JUJsvv7v7v777777r777r7r7rr7ri77Jv777r77777r7r777r7r7rrrv77777v7v7ri:.:::::::::::::::::::::.
515XI5IX5X5XIK552KII252SUIIS25I5USIX5K55u2U21215U52S52j1j1ssYYYjv77v77r7r77rrrrrrrr7rL:.:irLvv77rrr7rrrrrrirrrrrrr77r777777LYuL7ri::.::::::::::::::::.
5j5ISI52II55S5KI5I52SIIUU2S15IXIXIII5SKS511uI15UUIIUX22JJLYLsLYLY7v7v77r7r7r7r7rrrrr7v....::vJs77rrrrr77rrririrrrr7rrr7777777vssuLL7i::::::::::::::::.
5I5qISXX25SPSS2S55ISUI2I2II5155KS5I5IS55XK2UjIU2u521uu1SusvLLYvv7v7v7777rrr7r7r77rrv7i.......:vjv7rrrrrrrrirrrr7irirrrirr7vv777vvLvL77rrii:::::::::::.
KjX2XSKKP5XSKK5IXIXI55SI5IS222525IS5X5SSX5X52252U1uJjJuJU1uv77v777L77r777r7r77rr7rYv..:::.... .ruLvr7r7rrirrrirriiirrirr7r7vLvv777LvYv77rr7::::::::::.
5uII25SSIKISSqSXIS5XI55SI525U55IIS5SIXSXSX5KS5jU1IjjJJjusjJ2juLYvLvJ7vr7r7r777rrrvi..:.:......  :17v7v77rrrrrrrrrririii7r7rr7LLLvL7vvL777777:::::::::.
qUXIS5KS55SI55XSSIS25UII52I255XIS2SIS2XSXIKISX5Juj1u1v7vssjLYv7ri:irvYL7v7v7v777sr........:....  :Y777vv7r7r7rrrrrriririrrrr7r77v777777777vi::::::::i.
X2XX2X5K5XSK5SSXSKI5I52I252225I5II252SII5X5SISSIuJvsuJri::irii:i:i:::irrirrrr77sui.:.......:....  .J7rrv77777777rrrrr7r7rrirrrr777777v77777:.::::::::.
K1SXI1I5KSK5ISI5q5X5SIS55IKU5252525IS2IIXUIII2I2SI1vJs1jLi::riiiiii::::.:.:...:ii...:.........:..  .L7rrrr777r777r7r7r7r777r7r7r7777777r77v7i:::::::i.
SU2S2II52SSqSSIX5SIKS55S552XXSIXISII5S2525uU1IUI221IYJJusuLr::i7iiii:::i::::::...:::............... .YLL77r77v77r77v777777r7r777r7r77777r77vv::::::::.
Iu5II25ISIXXqSS5XIX5K2S2KSX2KIS5SISIS2I22U512u1j1ujuIYvvsY1jYi::iiiii::::::::::::.:::..................:ir7rr7vLJ7rr7r7r77vr7r777r777v777r7vY7::::::i.
IU25IIIX5I2qXX5KSX5XXq5S255X5XS5IIII1IU2u1121uU1JuJuY1YvvsYYsuvr:.:iii:i::::::.:...:.:...........:.... .  ..:....r77rrr7r777rv777777rv7rrv77vYi::::::.
qjK2qIXUIUISPISXqXX5XXKSX2I2X5XI515UI122UjsLjsYYusJJ11IJv7vLY7vJsr:.::i:i::::::::::::::::::.........:.........::...:r77r:.:rrr77v7v777v7v7vrvvr:::::i.
525SXPXXI21IIPXKSK5KSXSXSS2SIXII25151UuUJ1Jv7vvus1UuJISP2L77Lv77vsL7::.:::::::::::::::::::::........::..........:ii::ir7rr7vrrr7rvYYvv7v7vvv7svi.::::.
KuK5XXqqqSSUjUPSXXKSKXKIKIKS5II551SII11uJr7JEQBBBBMJj7irXP27v7vvvvvLsvr::::::::::::.:.:.:.:.:.........:::.........::iii:ivsvvrv777vvYLsLYvLvsYu7::::i.
S2S52X5XIXXqSIIPSSSXSKSqSS552UU21U1I12svvUgBBBQS7i. .   .vqPJv7v7v77vYYY7i:i::.:::::.:.:....::::......:::........:...:.:rv7v7v7777r77YvJLsLsLYs1i::::.
K1K552IISIS5K525P5SSSXqXXISU51IUU1I1U7uPRQBM2r.            i2Uv7777i777vs:::iii::::.:.:.:.....:::::...:.:::...:.......ivvr777r77v7v7v7vvJYsLsLJur.::i.
51III5I55SI5ISU1IPXKIS2SSK251212UI12vJR12EL. ...     . .     IUY77r7r77Yi::i:::iii::.:.:...:...::i::::...:::........:7vv77r7r7777v7Lv777vv7LLsLJr::::.
X1K2S2II5U5USIq5IKdKX2SU5IXIIU2uU12ujqJrbssrrrri..  .......  .X1vrrr77si.:i::::::iiii:......:.:.:.::r:......:...ii77Y7777777v77r7777v77777vvsLsYr.::i.
S2SSXS2IISUII55K22IPqq55IXISIUU21IU7i..RBq1Ujji.:r:.........  JXsjsLrLr..::::::i::::::.vY7:....:.:.::i:..r7v7vvvv777r7r7rvvLvv7v7v777v77777vvsYur::::.
K1X2XS5UXI55KIXSS1UIXKXU55Iu21UUUU1iY:rbQ22usri::rr     ....  iq1vu1s7i::.ii:::::::..:7vv7Yvi.  ..:...:i.iJr7r7rrrrrrrrrrr77v777v7LvL7v7v7v7vvu17:::i.
XISSIK25IS5IIK555SISISKK55122I1IuUrIRQQRZZdXJvvJ77ri:.   .  ...21usvivv77isjv7:....irL7r777vvLr:...:::..:i77r77rrrrrr7rrr7r7r7rv7vvL777v7v7v7sY17::::.
XUXIXSXIS15SSIXIX5SI51XKqIX5S111U1rUBQQDgRQq11S2IXDQQBBq   .Xu rUL7rLsLvjjYLIIr.:ivv7r777r77vvjJJi...:::..:7s77r7r7r7777vr777777v7v7v7YvvvLvvLjj7:::i.
S25SSXKq5525IK5KS52I2Iu2SKI52Iu112YSBBBQgQMEIujXQBDI2EBB1 .7Rg..sYi7Ls7sL7rYLv7sjv777rrr7v7v7Lv7i77r..:i::.:7L77rv777v7777r777777v7vvYvvLLvv7YJUr.:::.
KUKSX2qXKXI22IS55I5U5UI1I55I555uuJ17Xg5PQQQE5uSI1PQQ2rigL  .::  LLLLYLLvLYLuJs7irrrrrr7r7rvr::7:.rrvvr:.:::..rY7r777777777v77r7777v7v7vvLvYv77u17:::i.
52S52KII2KS52SUKU5UIUI12U2I52I2IJ1uvJP1DgRQgPP2u: ::   vL       7svv7LvsLYsu7UjsUv7L7Y7r::.. ..  ..7JL7r::::.:v7r7r7rrrv777777r7777v777vvLvL7YYU7::::.
XUX5S2I155qSKISI52SU2121u1UUU1IUIsuLsgQZMKggZKK1Yi.    v2:      v77vsvvvJsu. ...:i2vvir::.. . ...   :7sYjr::::L77rrr7r7r7rrr7r7777v7vvv7vvY7vvv7r:::i.
I1IKS5IXIXXK5I1U2I2212U2uU1UU21IU1ju77UMBgDgPPPqSKX7  7D7rj..  .Jsvv7Yvv7Ur.      ri  ..ir.::....:..  .iYIsr.:vL7YvY7v77vv77r7777v777vvvvLLv7Yvvi::::.
X1X5SXXI5USXK25UU1U2UuIU21uu2u2u2uUJJvr7PDBqIIXXX2q5IbIJgEU..  r1vv77sJ7vssi::..:.rPr...   .:...:::...jiii7L1rvrr7iirrvL77svv7L7vvYvv7YvYvLvYvYvr:::i.
S2SS5K55252SXSU2uI22uuYUu2J1uUuuJ1ujsju7rrgdI55X5S5K5SJ2EPPKL..rrJ7YYvJ1UUjiYUU1..:J:.7j.:....    .. ... . iJirrvr7rr7ri:rrv77rr7sYuJJssvYLv7vvYi::::.
I1I2525IXIX2SIUU2Uu11Ju121JLujI1UJ1jUJujurSDPqP5qqP5qPDDMRguR5YvrjYLuLiiYv:.rir7..:.. ......v:i:...:..:..: .      ...::::vL7s7vriririr7LjLsv7vJvi:::i.
2UIIUI2525IIU5U2uU121jUS12uU1IU2111Uj1uU7IgEKPXIIqKbK5IP7.   .u7:ssJuY  ..  UUvu..i.........Y:7vsr1: .:..L........       ....iiri77vriirLqU1Juvsi::::.
X1XI5IS2S252525uUuu1usj12jUJ1uIujJuJsj2r:XBd5KK5PSqXqXdgBRqr ..  YjY1Y  .i  uuYJ..r.........s:ri7:J...... ...YIr..:.r::...        ..:.::ivuvLvYL7.::i.
2uIX2225I555I5I2U211uusJ11JuY121J2u1J1rvPi1BZdPPqqSPbq1XXQS  .   JI7:i      s27j..::....... r.72X:L......... r7i . .vIi...:si.........   .:ii1YYJ:.::.
SJI25U5UXI5IS55U2U2US22Js11ujJI1UuIII7.rEMr7RBQggdDdddDdbgBSr .  ::i5ZP5Mi  JKrv. .i: ..... 7.ru5.r .......  IX7....77. . :2s ..iKv...ri..::r5jv1r.:i.
S155I5225XII2III1IjU1UjUJUuU1UXqXPXXUv:.:7PI.LQBQDZgEgMUPgBBd.  ...BBq5JvBr ii.i...:........r.:2S.:    . ..  jU7    5P:...:r:.. :1r...LX...::XJss2:.:.
K1S552115IXI5IS2525U2UUJ5SPKdX177ii::rd:7r7J1::vRBQbEdDqQvZdSv. .qDBgXKXviI :..:r..:........: :JX7Yrrii:.    uS: .:i2J7:r7vv: ..r7:...:i.....LssJJ1::.
X2I5I5u2I5USI2IKIISujSSKdXvi..  ...:::55rUr:.i7r: rQEDPqRj:.:ii:.SBQMDdMZQK  . ..............:r:.....iir7u7r..isr7i.       77 ..iv:....:.....SJusu2v..
5uS55I555ISI5US1IUIJ5S2r.    .:::::.:i:q5.i::.:: .MRMZd2Pi..:.:.  ZBQPQBBQi ..  ...rY......  rr     ..:.:ir2IiJJr::::...:rJv:...:7i...:i.....s1suJJur
IuISXXI52IU55511u5SPs:         ...:::iiiZu.::. .UgRBQBBBB. ....:.:.vUDj1si ...:. . :i..:::. .isSvrrs77rri77vrIJvLjIPSIuP7i......:......:.....vuu7ss12:
KjXSK5KXXI5I55IIKKYrYi  .:      ...:rii::Sr  :XBM:L.:DQQBB: ..:.... :Q:   . :PPK: ... ...  LKY7uX5Yr:irr7sKUL2r.:...  .j. ................. .vIjJLJY2Y
IU5XI22KSX5X2S5SbJ...U:  .       ..::i:iiv2sDBgr rBPd2:.:EBBi... .. :BBB    i27I7..:. .... vSY:.iS1vj5Jr::rK.:Lr ....::Y.......... .... ....:LuJvusu1s
IUK2SIS5q5S2U1Kq5i... 1: .    .  .....::..rXg7    rs7:    ir:...  . .QBD    .XXU2vi.r:. .  :Lr7:iUIUJJ. .. j iS5. . .uur...7X....vI...:v... isjLju2Ysv
I25KIXI5IKII1KXIr...  .L .:      ............:....:S ..::..  .....  .BQX     vIP2Y7v5Uv77i..ijI2U55XLL.i:i s.iru7.  i7Su. .iU: ..r5.. :2... :vjIL7vvsY
quKS5IIU5SKUSPXv.:::r  .. L.      .......... ......P:.......... ... .BBd      jvYIIu1uUI5U27.:vIv.:jLiJ5: .r...1s...vrPr  .iuL.i.ri........ :7JjLr7jUv
51SSIX25I5S55Pv. ::.rq7   77     ................. Xi..:.:..... .:.  QBg         iYUssYYrrUrLYL2u. ::.jSXvjIi.:uv.JiirKi .:vJU.Li.......  7.7L7LsjuUuY
SJ5U5252S25IX1i..:i.  rr  r5. .  ..............:.:.IY .::..........  BBB        :  .JsjvYJs7UUUsUvi.r  iSj72siYKLi: j:Sv:.i5Is7YYiv:. .:.rq1uJLYL7ujjv
212S55252I252ui::iri..rr2 .g. .. ............:.:.:iJi .............  Qg2        :. :UuJj7i7Svvri1P2uri:. .JUU21:::.7X7rU7:7SJ2J52SIjivi7jq11UPIUu2u21J
S1XU5ISIS252Ssi:i:i:. rQJr.I.  ::.. . ........:.:.:v: ..:..........  u   ..       .uKsIi i15L  vjYjsISPu..111s7ir:vqs....irj1Yu1I:.1S2v:5PK: iPqSssrur
UUI51ISSIX5KIL:i::i:.  gg.bd.:..ii...........::i::r5idJ:.. ..::i::.  BBB:.       .YP25UusK1X5vsbI2J1PS2KK7vP7IYJK1iijJr:uESq51sjui.7:sqP7.i7r.::::jY2j
UjS2IUS2S25SSLi:::i:.   BBBX ........iiir::..::::.YBYiv.....:::.::.  YY           iS27XJii:i:rr::.:i..:sKi.:r..J7   ..  :..:757:L.:.::Sr    . ... 7Pr.
IUI5uI5XSS2SILii::::. .iQBQv        ..::::::.:::::LB2 .::::::.:: . rjJr..r:        J  .S1uuj::..i.:r.::vUr.ri:L2Yr..L:.... ..5Lurv5u1211J7.:Ki...rIK:
S1X2U15U55S5ILvr::i  dBPBMBEYJi.  .7q:. . ..::i:i.1Qg.:ir::::.:Pv.:BBBBBQ:i        i. :SSuuL1P: s:r27s:1Ks::uiu5S7  22i . ...sJY1j2vs1K7rJ:.PS...rPSI.
5U25I5IIISIXIurvirr: :..QBRBBBBBgXvEbririirrrjrr:.iBBr:iiii:::.:u.rBBQQBgJsSMBgdv...:.iqr. .1Sr:iJrUUY jb.  iu1:LL. v2ri..7. vJruYJssY7S:::755:.i.ibsi
SuK5S5I2555U2LriYv:.:.. gBBZZdP12ZEjs2gRBBb1PU7vii:2BI:irrriiiv:.:.sBRQQREPBBR177i:.rK55i ir2jU1U1uJvJ 7q....r5sS7. 1rU5r.::7::7Usvs17.1Li7LXS:i7 :XUv
5IKqXXI525ISjs7vYsir::. jBQRggPPgLii77..:i:iiir7ii::BQ:rr7rriiU7i:.uBQRBgRQPvi::.:...J2IuLJSYsJYL1Juv17uq7vIJ5Xqdj  Ir7s1J:iS2ijuuiLsUUUr:ULss 7Ei..su
K2XUXKK5S5XKUvv7LJsr::. :BBggDPZM77iL7::::::i:7r::::BQ:irrrrii27i..LBQRRBQEr........ :PII2uI2JXX5ju5525jvirii7Li7i..L277L52KbIS2S17rXISSX:j72u.:EPI1Ku
Is11u5I5UUUU7rir77:.     RBMZgEgZvvrJr.....::.i:.:.:BQ:vr:.:..vi.. rQQgRBq            . :ur..............:::. .. ....7.... .......::::::::rri7..:..::*/
 
