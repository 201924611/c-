

# define HUNGRY 0x1
# define THIRSTY 0x2 
# define TIRED 0x4
# define FIRE 0x8

# define COLD 0x10
# define POISON 0x20
# define POISON1 0x40
# define POISON2 0x80

# define POISON3 0x100
# define POISON4 0x200
# define POISON5 0x400
# define POISON6 0x800




// 1. ������
// 2. ��������


// ��������
int global = 0;

int Add(int left, int right)
{
	return left + right;
}



int main()
{
	// �ڷ��� (ũ�� ����, byte) Data Type
	// ������ : char(1), short(2), int(4), long(4), long long(4)
	// �Ǽ��� : float(4), double(8)

	int i = 0;

	// 1 ����Ʈ�� ����� ǥ��
	// 256 ���� -> 0~255
	unsigned char c = 0;
	c = 0;
	// c = 255;
	c = -1;

	// 1 ����Ʈ�� ���, ���� �Ѵ� ǥ��
	// -128 ~ 0 ~ 127
	char c1 = 0;
	c1 = 255;

	// ���� ���� ã��(2�� ������)
	// �����Ǵ� ����� ��ȣ�� ���� ��, 1�� ���Ѵ�

	int a = 4 + 4.0;

	// ����ǥ�� ��İ� �Ǽ� ǥ�� ����� �ٸ���
	// �Ǽ� ǥ������� ���е��� �����Ѵ�.
	// ���� double(8) �ڷ����� float(4) �� �Ʒ��� �Ҽ������� ��Ȯ�ϰ� ǥ���� �����ϴ�.
	
	// ������ ��������, �Ǽ��� �Ǽ����� �����ϵ�, �� ǥ������� �� �����ڰ� ����� ��� ��������� ��ȯ����


	float f = 10.2415f + (float)20;

	// ��Ʈ ������ ���� ����,
	// & �Ѵ� 1�� ��� 1
	// | �Ѵ� �ϳ��� 1 �̸� 1
	// ^ ������ 0, �ٸ��� 1
	// ~ 1�� 0����, 0�� 1��

	unsigned int iStatus = 0;

	// ���� �߰�
	iStatus |= HUNGRY;
	iStatus |= THIRSTY;

	// ���� Ȯ��
	if (iStatus & THIRSTY)
	{

	}
	
	// Ư�� �ڸ� ��Ʈ ����
	iStatus &= ~THIRSTY;

	// ����
	// 1. ��������
	// 2. ��������
	// 3. ��������
	// 4. �ܺκ���

	// �Լ� (��ɺ��� ���ȭ �߿�)
	int data = Add(10, 20);


	int iName = 100;
	
	return 0;
}