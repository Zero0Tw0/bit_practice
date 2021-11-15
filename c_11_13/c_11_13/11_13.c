#define _CRT_SECURE_NO_WARNINGS 1

//226. ��ת������
//
struct TreeNode* invertTree(struct TreeNode* root) {
    if (root == NULL)
        return NULL;

    struct TreeNode* tmp = root->left;
    root->left = root->right;
    root->right = tmp;

    root->left = invertTree(root->left);
    root->right = invertTree(root->right);
    return root;
}

//100. ��ͬ����
//
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (p == NULL && q == NULL)
        return true;
    if (p == NULL || q == NULL)
        return false;
    if (p->val != q->val)
        return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

//144. ��������ǰ�����
//
void _preorderTraversal(struct TreeNode* root, int* returnSize, int* ret)
{
    if (root == NULL)
        return;
    ret[(*returnSize)++] = root->val;
    _preorderTraversal(root->left, returnSize, ret);
    _preorderTraversal(root->right, returnSize, ret);

}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    if (root == NULL)
        return NULL;

    int* ret = (int*)malloc(sizeof(int) * 100);
    _preorderTraversal(root, returnSize, ret);
    return ret;
}

//145. �������ĺ������
//
void _postorderTraversal(struct TreeNode* root, int* returnSize, int* ret)
{
    if (root == NULL)
        return;
    _postorderTraversal(root->left, returnSize, ret);
    _postorderTraversal(root->right, returnSize, ret);
    ret[(*returnSize)++] = root->val;

}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    if (root == NULL)
        return NULL;

    int* ret = (int*)malloc(sizeof(int) * 100);
    _postorderTraversal(root, returnSize, ret);
    return ret;
}
//