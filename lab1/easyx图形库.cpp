#include <graphics.h>
#include <conio.h>

int main()
{
	// ��ʼ��ͼ�δ���
	initgraph(640, 480);

	MOUSEMSG m;		// ���������Ϣ

	while (true)
	{
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();

		switch (m.uMsg)
		{
		case WM_MOUSEMOVE:
			// ����ƶ���ʱ�򻭺�ɫ��С��
			putpixel(m.x, m.y, RED);
			break;

		case WM_LBUTTONDOWN:
			// ����������ͬʱ������ Ctrl ��
			if (m.mkCtrl)
				// ��һ���󷽿�
				rectangle(m.x - 10, m.y - 10, m.x + 10, m.y + 10);
			else
				// ��һ��С����
				rectangle(m.x - 5, m.y - 5, m.x + 5, m.y + 5);
			break;

		case WM_RBUTTONUP:
			return 0;	// ������Ҽ��˳�����
		}
	}

	// �ر�ͼ�δ���
	closegraph();
} 