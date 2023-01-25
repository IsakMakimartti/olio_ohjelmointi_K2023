class BasicALU
{
public:
    BasicALU();
    double sum(double,double);
    double sub(double,double);
    double mul(double,double);
    double div(double,double);
};

class Calculator:public BasicALU
{
public:
    Calculator();
    void inputOperands();
    void calculateResult();
    void showResults();
private:
    double op1;
    double op2;
    double result;
    char operation;
};

BasicALU::BasicALU()
{
    cout<<"BasicALU constructor!!"<<endl;
}

double BasicALU::sum(double a,double b)
{
    return a+b;
}
double BasicALU::sub(double a,double b)
{
    return a-b;
}
double BasicALU::mul(double a,double b)
{
    return a*b;
}
double BasicALU::div(double a,double b)
{
    return a/b;
}

Calculator::Calculator()
{
       cout<<"Calculator constructor!!"<<endl;
}

void Calculator::inputOperands()
{

    cout<<"Give first operand"<<endl;
    cin>>op1;

    cout<<"Give operation +, -, * or / "<<endl;
    cin>>operation;

    cout<<"Give second operand"<<endl;
    cin>>op2;
}

void Calculator::calculateResult()
{
    switch (operation) {
    case '+':
        result = sum(op1,op2);
        break;
    case '-':
        result = sub(op1,op2);
        break;
    case '*':
        result = mul(op1,op2);
        break;
    case '/':
        result = div(op1,op2);
        break;
    default:
        cout<<"No such operation!"<<endl;

    }
}

void Calculator::showResults()
{
    cout<<op1 << operation << op2 << " = " << result << endl;
}
