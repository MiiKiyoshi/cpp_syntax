# -------------------settings-----------------------#
CC = g++
TARGET = a.out
OBJS = random.cpp main.cpp
	# CC: 사용할 컴파일러 TARGET(@): 만들 실행파일 OBJS(^): 의존하는 놈들

# 컴파일 옵션
CFLAGS = -g -Wall
	# -g: 디버그(gdb 이용) -Wall: 경고 메시지 표시

# 링크 옵션
LDFLAGS = -lm
	# -lm: 수학 라이브러리

# ---------------------Making-----------------------#
# all: 결론적으로 뭘 만들지
all: $(TARGET)

# 링크 과정
$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

# 컴파일 과정
.cpp.o:
	$(CC) -c -o $@ $< $(CFLAGS)

# 다 만들었으면 오브젝트 파일들 삭제
clean:
	rm -f $(OBJS) $(TARGET)
