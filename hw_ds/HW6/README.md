<h1>프로그래밍 스튜디오 DS Lab 04</h1>
04분반 / 22200182 / 김준형
<br>
DS031
<img src="https://github.com/ProgrammingStudio2025/week6-ds-tiger020517/blob/main/captures/DS031.png">
DS032
<img src="https://github.com/ProgrammingStudio2025/week6-ds-tiger020517/blob/main/captures/DS032.png">
DS033
<img src="https://github.com/ProgrammingStudio2025/week6-ds-tiger020517/blob/main/captures/DS033.png">
<br>
<h2>소감</h2>
<br>
Stack은 배운지 꽤 된 개념이고, 활용 할 기회가 많았기에, stack에 대하여 추가 학습 할 필요는 없었다. 하지만 makefile에서 조금 고전하였다.
<br>
특히 DS032에서 애먹은 것은 두개의 다른 input을 Makefile의 명령어 만으로 다르게 컴파일 하고싶었다. 하지만 교수님께서 주신 파일은 우선 .o 파일을 만든 후, 목적파일들 끼리 컴파일 하는 것 이었어서 이미 컴파일의 4단계 (전처리, 어셈블리언어로 변환, 기계어로 변환, 링킹) 중 3가지가 끝나버렸고, 특히 파일명을 다르게 하려면 입력을 받던가 전처리를 변경하여야 하였는데, 입출력은 정해져 있어 전처리를 바꾸려 하였으나 실패하였다.
<br>
크게 3가지 방법이 있었을 것 이라고 생각하였는데
<ul>
	<li>%.o 가 아닌 %.data1.o와 %.data2.o로 규칙을 나눈다</li>
	<li>data1 또는 data2로 입력이 되었을 경우 .o파일을 삭제 후 다시 목적파일을 만든다</li>
	<li>%data file을 만드는 명령어를 Mkaefile에 넣는다 (cat >> 같은)</li>
</ul>
3번째 방법은 너무 makefile이 거추장스러워지고, 2번방법은 Makefile 의 같은 이름의 규칙이 여러개일 때 어떤순서로 이루어지는지 파악하지못하여, 1번방법은 알 수 없는 오류와 시간의 한계로 실패하였다.
결국... 목적파일을 따로 만들지 않는 방법으로 합의보았다. 이게 맞는가... 최선은 아니지만 내가 원한 Makefile명령로 여러개의 자원들을 자유롭게 조합하여 컴파일 하는 방법을 찾은 것 같고 좀 더 makefile과 친해진 것 같아서 좋았다.