class OutOfBoundsException{};
class IntArray {
    private: 
        int* m_ptr = nullptr; 
        int m_size = 0; 
    public: 
        IntArray() = default; 
        explicit IntArray(int size){
            if(m_size != size){
                m_ptr = new int[size]{};
                m_size = size;
            }
        }
        ~IntArray(){
            delete[] m_ptr; //delete[] is used to release an array pointer!
        }
        int size() const{
            return m_size; 
        }
        bool isEmpty() const{
            return (m_size == 0);
        }
        bool isValidIndex(int index) const{
            return (index >=0 && index < m_size);
        }
        //read and modify elements 
        int& operator[](int index){
            if(!isValidIndex(index)){
                throw OutOfBoundsException();
            }
            return m_ptr[index]; //access the element at (m_ptr + index) spaces over
        }
        //read only access
        // int operator[](int index) const{
        //     return m_ptr[index];
        // }
};