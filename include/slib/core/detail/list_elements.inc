/*
 *   Copyright (c) 2008-2019 SLIBIO <https://github.com/SLIBIO>
 *
 *   Permission is hereby granted, free of charge, to any person obtaining a copy
 *   of this software and associated documentation files (the "Software"), to deal
 *   in the Software without restriction, including without limitation the rights
 *   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *   copies of the Software, and to permit persons to whom the Software is
 *   furnished to do so, subject to the following conditions:
 *
 *   The above copyright notice and this permission notice shall be included in
 *   all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *   THE SOFTWARE.
 */

namespace slib
{
	
	template <class T>
	SLIB_INLINE ListElements<T>::ListElements(List<T>&& _list) noexcept
	 : list(Move(_list))
	{
		data = list.getData();
		count = list.getCount();
	}

	template <class T>
	SLIB_INLINE ListElements<T>::ListElements(const List<T>& _list) noexcept
	 : list(_list)
	{
		data = list.getData();
		count = list.getCount();
	}

	template <class T>
	SLIB_INLINE ListElements<T>::ListElements(AtomicList<T>&& _list) noexcept
	 : list(Move(_list))
	{
		data = list.getData();
		count = list.getCount();
	}

	template <class T>
	SLIB_INLINE ListElements<T>::ListElements(const AtomicList<T>& _list) noexcept
	 : list(_list)
	{
		data = list.getData();
		count = list.getCount();
	}

	template <class T>
	SLIB_INLINE ListElements<T>::ListElements(const CList<T>& _list) noexcept
	{
		data = _list.getData();
		count = _list.getCount();
	}

	template <class T>
	SLIB_INLINE ListElements<T>::ListElements(const ListParam<T>& _list) noexcept
	 : list(_list._getList())
	{
		data = _list.getData();
		count = _list.getCount();
	}

	template <class T>
	SLIB_INLINE T& ListElements<T>::operator[](sl_reg index) const noexcept
	{
		return data[index];
	}

	template <class T>
	SLIB_INLINE T* ListElements<T>::begin() const noexcept
	{
		return data;
	}

	template <class T>
	SLIB_INLINE T* ListElements<T>::end() const noexcept
	{
		return data + count;
	}
	
}
