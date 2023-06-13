from abc import ABC, abstractmethod


class InvalidOperationsError(Exception):
    pass


class Stream(ABC):
    def __init__(self):
        self.opened = False

    def open(self):
        if (self.opened):
            raise InvalidOperationsError("Stream is already opened.")
        self.opened = True

    def close(self):
        if not self.opened:
            raise InvalidOperationsError("Stream is already closed.")
        self.opened = False

    @abstractmethod
    def read(self):
        pass


class FileStream(Stream):
    def read(self):
        print("Reading data from a file")


class NetworkStream(Stream):
    def read(self):
        print("Reading data from a Network")


class MemoryStream(Stream):
    def read(self):
        print("Memory stream works on")


stream = MemoryStream()
stream.open()
stream.close()
stream.read()
